#include <iostream>
#include <sstream>

//Function prototypes
int get_int();//error checking function

/*The main function receives number input, checks its validity
 * in case of invalid input gives a chance to input again 
 * calculates the sum of all multiples of 3 and 5 below input number.
 */

int main() {
    int number = 0;
    int sum = 0;
    std::cout << "Please enter a number between 1  and 1000: " << std::endl;
    number = get_int();
    for (int i = 1; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
	    sum += i; 
    	}
    }
    
    std::cout << "The sum is: " << sum <<  std::endl;
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




