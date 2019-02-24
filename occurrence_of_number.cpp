#include <iostream>

/*The main function receives user input for array size, 
 *then receives element inputs,
 *and calculate the frequency of each element in a given array.
 */

int main() {
    int n = 0;
    std::cin >> n;	
    int array[n];
    for(int i = 0; i < n; i++) 
	std::cin >> array[i];
    int duplicate[n];
    for(int i = 0; i < n; i++) 
        duplicate[i] = 0;
    for(int i = 0; i < n; i++) {
        if(duplicate[i] == 0) {
            int count = 0;
            for(int j = i; j < n; j++)
                if(array[j] == array[i]) {
                    count += 1;
                    duplicate[j] = 1;
                }
	    std::cout << array[i] << " occurs " << count << " times" << std::endl;
        }
    }

    return 0;
}



