/**
 * @mainpage Class score to grade level converter
 * @author Varduhi Martirosyan <varduhi.m91@gmail.com>
 * @section purpose Purpose/Ovreview
 * The purpose of this program is to generate a class grade level from Numeric inpues.
 *
 * @section reqs Requitments
 *
 * The application would accept numeric enries from user via the console.
 * The application would report and hendle invalid inputes.
 */

#include <iostream>
#include <sstream>

//function prototypes
int get_int();//error checking function

/**@brief The main function receives numeric input and converts it into corresponding grade level
 */ 
int main() {
    int user_input = 0;
    char grade = 0;
    std::cout << "Please enter your class score to see your grade level: ";
    user_input = get_int();
    if (user_input >= 90 && user_input <= 100) {
        grade = 'A';
    } else if (user_input >= 80 && user_input <= 89) {
        grade = 'B';
    } else if (user_input >= 70 && user_input <= 79) {
        grade = 'C';
    } else if (user_input >= 60 && user_input <= 69) {
        grade = 'D';
    } else if (user_input >= 0 && user_input <= 59) {
        grade = 'F';
    }
    std::cout << "Your grade level is: " << grade << std::endl;
    return 0;
}

int get_int() {
    bool flag = false;
    std::string s("");
        do {
        getline(std::cin, s);
        flag = false;
        if (s[0] == '-') {
            for (int i = 1; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid Input. Enter a number. " << std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid input. Enter a number. " << std::endl;
                    flag = true;
                    break;
                }
            }
        }
    } while(flag);
    int result = 0;
    std::stringstream str_int(s);
    str_int >> result;
    return result;
}

