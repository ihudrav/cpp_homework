#include <iostream>

/*The main function asks array size, and elements of an array. 
 * Then it asks to enter element user wants to remove. 
 * As a result it removes mentioned element from the array.
 */

int main() {
    int size = 0;
    std::cout << "Enter the size of Array: "<< std::endl;
    std::cin >> size;
    int array[size];
    std::cout << "Enter Array elements: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    } 
    int position;
    std::cout << "Enter the element you want to remove: " << std::endl;
    std::cin >> position;
    position--;
    for (int i = position; i < size; ++i) {
        int temp = array[i];
	array[i] = array[i+1];
	array[i+1] = temp;
    }
    for (int i =0; i < size-1; ++i) {
        std::cout << array[i] << " ";
    }
 return 0;
}
