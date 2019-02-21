#include <iostream> 
#include <sstream>

//Function prototypes
int inverse_number(int x);//function which calculates inverse of a given number
int get_int(); //function that checks invalid inputs and allows to try new input

/*The main function states greeting, receives number input, checks its validity
 * in case of invalid input gives a chance to input again
 * calculates an inverse of a given number
 * Prints a Thank You statement*/

int main() {
    std::cout << "Hello! I can inverse a given number!" << std::endl;
    int number = 0; 
    int inverse = 0;
    std::cout << "Input a number: ";
    number = get_int();
    inverse = inverse_number(number);
    std::cout << "Inverse number is: " << inverse << std::endl;
    std::cout << "Thank You! " << std::endl;
    return 0;
}

int inverse_number(int number) {
    int inverse = 0;
    while(number != 0) {
      inverse = inverse * 10 + number % 10;
      number = number / 10;
   }
   return inverse;
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
                    std::cout << "Invalid input! Enter a number: " << std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid input! Enter a number: " << std::endl;
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











