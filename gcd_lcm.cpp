#include <iostream>
#include <sstream>

//Function prototypes
int gcd_lsm();//function which returns Lowest Common Multiple(lsm) and Greatest Common Divisor(gcd) of a given 2 numbers
int get_int();//error checking function

/*The main function states greeting, receives number inputs, checks its validity
 * in case of invalid input gives a chance to input again
 * returns gcd and lsm of the given numbers
 * Prints a Thank You statement*/

int main() {
    int n1 = 0;
    int n2 = 0;
    int gcd = 0;
    int lsm = 0;
    std::cout << "Hello! I calculate Lowest Common Multiple and\nGreatest Common Divisor of a given 2 numbers:\n " << std::endl; 
    gcd_lsm();
    std::cout << "Thank You!" << std::endl;
    return 0;
}

int gcd_lsm() {
    int n1;
    int n2;
    int number1;
    int number2;
    int temp = 0;
    int gcd = 0;
    int lsm = 0;
    std::cout << "Please enter 2 numbers: " << std::endl;
    n1 = get_int();
    n2 = get_int();
    number1 = n1;
    number2 = n2;
    while(number2 != 0) {
        temp = number2;
	number2 = number1 % number2;
	number1 = temp;
    }
    gcd = number1;
    lsm = (n1 * n2) / gcd;
    std::cout << "Greatest Common Divisor: " << gcd << std::endl;
    std::cout << "Lowest Common Multiple: " << lsm << std::endl;
    return gcd;
    return lsm;
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




