#include <iostream>
#include <cmath>
#include <sstream> 

//function prototypes
int binary_to_decimal(long long);//fanction which converts binary number to decimal.
int get_int();//error checking function

/*The main function receives binary number,
 * checks its validity,
 * in case of invalid input gives user opportunity to enter again,
 * converts binary numbrt to decimal.
 */

int main() {
    long long binary_input = 0;
    std::cout << "Enter a binary number: "<< std::endl;
    binary_input = get_int();
    std::cout << "Decimal is " << binary_to_decimal(binary_input) << std::endl;
    return 0;
}

int binary_to_decimal(long long binary_input) {
    int decimal_number = 0; 
    int i = 0;
    int remainder = 0;
    while (binary_input != 0) {
        remainder = binary_input % 10;
        binary_input /= 10;
        decimal_number += remainder * pow (2, i);
        ++i;
    }
    return decimal_number;
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
                    std::cout << "Invalid input! Enter a number. "<< std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid input! Enter a number. " << std::endl;
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




