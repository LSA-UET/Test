#include <iostream>
#include <vector>

using namespace std;

// Function to perform Insertion Sort on a vector
void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    // Example usage
    vector<int> myArray = {12, 11, 13, 5, 6};

    cout << "Array before sorting: ";
    for (int i : myArray) {
        cout << i << " ";
    }

    // Call the insertionSort function
    insertionSort(myArray);

    cout << "\nArray after sorting: ";
    for (int i : myArray) {
        cout << i << " ";
    }

    return 0;
}
