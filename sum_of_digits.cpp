#include <iostream>
#include <sstream>

//Function prototypes

int sum_of_digits(int);//function which calculates sum of the digits of a given number
void choice_print_menu(); //function that prints yes or no choice statements for the user in order to play again
char error (); //function that checks invalid inputs and allows to try new input

/*The main function states greeting, receives input, checks its validity
 * in case of invalid input gives a chance to input again 
 * calculates a sum of digits of a given number
 * Asks user, whether they want to play again
 * Prints a Thank You statement*/ 

int main() {
    //Hello statement
    std::cout << "Hello! I can find a sum of digits in a given number!" << std::endl;
    char choice = 0;
    //Loop that controls if user wants to play again
    while (choice != 'n') {
        int number, sum;
        number = error(); 
        sum = sum_of_digits(number);
        std::cout << "Sum of the digits is: " << sum << std::endl;
        choice_print_menu();
        std::cin >> choice;
    }
    //Thank You statement
    std::cout << "Thank You! Have a good day!" << std::endl;
    return 0;
}



int  sum_of_digits(int number) {
    int sum = 0;
    int rem = 0;
    while (number >  0) {
    rem = number % 10;
    sum += rem;
    number = number / 10;
    }
    return sum;
}



void choice_print_menu() {	
    std::cout << "\nDo you want another turn?\n " << std::endl;
    std::cout << "If Yes, please enter: y " << std::endl;
    std::cout << "If No, please enter: n " << std::endl;
}	


char error () {
    int number = 0;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number;
    while(!std::cin.good()) {
        //Report problem
        std::cout << "ERROR: Faulty input! Try again." << std::endl;
	//Clear stream
        std::cin.clear();
	std::cin.ignore(INT8_MAX, '\n');
        //Get input again
	std::cout << "Please enter a number:" << std::endl;
        std::cin >> number;
 
    }
    return number;
}
		
	












