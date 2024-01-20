#include <iostream>
#include <vector>

using namespace std;

// Hàm sắp xếp mảng bằng thuật toán nổi bọt
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Nếu phần tử tại vị trí j lớn hơn phần tử tại vị trí j+1, hoán đổi chúng
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Mảng cần sắp xếp
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    // Gọi hàm sắp xếp và in kết quả
    cout << "Mang truoc khi sap xep: ";
    for (int i : arr) {
        cout << i << " ";
    }

    bubbleSort(arr);

    cout << "\nMang sau khi sap xep: ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
