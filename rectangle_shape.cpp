#include <iostream>
#include <sstream>

void rectangle();//Function that creates shape of rectangule of a given height and width.
int get_int();//Error checking function.

/* The main function contains function which 
 * draws shape of a rectangle of a given parameters.
 */

int main() {   
    std::cout << "Hello! I can draw a shape of rectangle with asterisks. " << std::endl;
    rectangle();
    std::cout << "Thank You" << std::endl;
return 0;
}

/* This function asks user for number inputs, validates inputs, 
 * and draws a shape of a rectangle with asterisks 
 * according to parameters that user input. 
 */

void rectangle() { 
    std::cout << "Please enter 2 numbers. Consequently for height and width of rectangle: " << std::endl;
    int height = 0;
    int width = 0;
    height = get_int();
    width = get_int();
    for(int i = 1; i <= height; ++i) {
        for (int j = 1; j <= width; ++j)
        {    
            if(i == 1 || i == height || j == 1 || j == width) {
 	        std::cout << "*";
            }
            else {
	        std::cout << " ";
            }
        
        } 
	std::cout << std::endl;  
  
    }
  
}

//Error checking function, to receive only positive integers.
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



