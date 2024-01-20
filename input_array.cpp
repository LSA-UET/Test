#include <iostream>
#include <vector>

using namespace std;

// Hàm nhập mảng từ người dùng
vector<int> inputArray() {
    int n;
    cout << "Nhap kich thuoc cua mang: ";
    cin >> n;

    // Khởi tạo vector với kích thước n
    vector<int> arr(n);

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    return arr;
}

int main() {
    // Gọi hàm inputArray để nhập mảng
    vector<int> myArray = inputArray();

    // Hiển thị mảng sau khi nhập
    cout << "Mang sau khi nhap: ";
    for (int i : myArray) {
        cout << i << " ";
    }

    return 0;
}
