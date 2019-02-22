#include <cstdlib>
#include <time.h>
#include <iostream>
#include <sstream>

//function prototypes
int get_int();//error checking function

/*The main function randomly generates a number between 1 and 100,
 * asks user for guess input,
 * notifies whether guessed number is less or greater than secret number,
 * allows user to input numbers untill will guess the secret number,
 * calculates the number of guesses that have been taken in order to guess the number.
 */

int main() {
    srand(time(0));
    int number;
    number = rand() % 100 + 1;
    int guess;
    int num_of_tries = 0;
    do {
        std::cout << "Enter your guess: "<< std::endl;
	guess = get_int();
	    ++num_of_tries;
            if (guess < number)
                std::cout << "Your guess is less, than the secret number" << std::endl;
            else if (guess > number)
                std::cout << "Your guess is more, than the secret number" << std::endl;
            else
                std::cout << "Your guess is right! To guess the number, you have taken " << num_of_tries << " tries. "<< std::endl;
      } while (guess != number);
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
                    std::cout << "Invalid input! Enter a number. " << std::endl;
                    flag = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Invalid input! Enter a number.  " << std::endl;
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




