#include <iostream>

int main() {
    int n;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Check if the entered size is valid
    if (n <= 0) {
        std::cerr << "Invalid array size. Exiting." << std::endl;
        return 1;  // Return a non-zero value to indicate an error
    }

    // Create an array of size n
    int* myArray = new int[n];

    // Read elements into the array
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Print the elements of the array
    std::cout << "Array elements are: ";
    for (int i = 0; i < n; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory for the array
    delete[] myArray;

    return 0;
}
