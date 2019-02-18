#include <iostream>
#include <sstream>

//Function prototypes
int minimum(int*);//function which returns minimum value of a given set
int maximum(int*);//function which returns maximum value of a given set
int get_int();//error checking function
void choice_print_menu(); //function that prints yes or no choice statements for the user in order to play again


/*The main function states greeting, receives number inputs, checks its validity
 * in case of invalid input gives a chance to input again
 * returns minimum and maximum values of a given set
 * Asks user, whether they want to play again
 * Prints a Thank You statement*/

int main() {
    //Hello statement
    std::cout << "Hello! I can identify minimum and maximum number of a given set!" << std::endl;
    char choice = 0; 
    //Loop that controls if user wants to play again
    while (choice != 'n') {
        int user_input[10];
        std::cout << "Please enter 10 numbers: " << std::endl;
	for(int i = 0; i < 10; ++i) {
	    user_input[i] = get_int();
	}
        int min = 0;
        int max = 0;
	min = minimum(user_input);
	max = maximum(user_input);
        std::cout << "Minimum number is: " << min << std::endl;
        std::cout << "Maximum number is: " << max << std::endl;
        choice_print_menu();
        std::cin >> choice;
    }
    //Thank You statement
    std::cout << "Thank You! Have a good day!" << std::endl;
    return 0;
}


int minimum(int user_input[]) {
    int n = 10;
    int min = 0; 
    min = user_input[0];	
    for (int i = 1; i < n; ++i) {
        if (user_input[i] < min) {
	    min = user_input[i];
	}
    }
    return min;
}

int maximum(int user_input[]) {
    int n = 10;
    int max = 0;
    max = user_input[0];
    for (int i = 1; i < n; ++i) {
        if (user_input[i] > max) {
	    max = user_input[i];
	}
    }
    return max;
}

void choice_print_menu() {
    std::cout << "\nDo you want another turn?\n " << std::endl;
    std::cout << "If Yes, please enter: y " << std::endl;
    std::cout << "If No, please enter: n " << std::endl;
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
                    std::cout << "Error number ... " << s[i] << std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Error number ... " << s[i] << std::endl;
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






