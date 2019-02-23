#include <iostream>
#include <cmath>
#include <sstream> 

//function prototypes
long long decimal_to_binary(int);//fanction which converts decimal number to binary.
int get_int();//error checking function

/*The main function receives decimal number,
 * checks its validity,
 * in case of invalid input gives user opportunity to enter again,
 * converts decimal numbrt to binary.
 */

int main() {
    int n = 0; 
    int binary_number = 0;
    std::cout << "Enter a decimal number: "<< std::endl;
    n = get_int();
    binary_number = decimal_to_binary(n);
    std::cout << "Binary is " << binary_number << std::endl;
    return 0;
}

long long decimal_to_binary(int n) {
    long long binary_number = 0;
    int remainder = 0;
    int i = 1;
    int step = 1;
    while (n!=0) {
        remainder = n % 2;
	std::cout << "Step " << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotient = " << n/2 << std::endl;
        n /= 2;
        binary_number += remainder * i;
        i *= 10;
    }
    return binary_number;
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




