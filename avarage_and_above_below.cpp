#include <iostream>
#include <sstream>

//Function prototypes
int get_int();//error checking function

/*The main function receives number inputs, checks its validity
 * in case of invalid input gives a chance to input again
 * calculates avarage of input numbers,
 * number of inputs above or equal to the average and
 * number of inputs below the average. 
 */

int main() {
    int i = 0;
    int num_count = 10;
    int above_equal = 0;
    int below = 0;
    float sum = 0;
    float avarage;
    int user_input[num_count];
    std::cout << "Please input 10 numbers" << std::endl;
    for(i = 1; i <= num_count; ++i)
    	 user_input[i] = get_int();
    for(i = 1; i <= num_count; ++i)
        sum += user_input[i];
    avarage = sum / num_count;
    for(i = 0; i < num_count; ++i)
        if (user_input[i] >= avarage)
            above_equal += 1;
        else below += 1;        
    std::cout << "Avarage number is: " << avarage << std::endl;
    std::cout << "Number of scores above or equal to the average is: " << above_equal << std::endl;
    std::cout << "Number of scores below the average is: " << below << std::endl;
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
                    std::cout << "Invalid input!!! Enter a number: "<< std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid input!!! Enter a number: " << std::endl;
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



