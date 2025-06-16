#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Lặp qua phần chưa được sắp xếp
        for (int j = 0; j < n - i - 1; j++) {
            // Đổi chỗ nếu phần tử hiện tại lớn hơn phần tử kế tiếp
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*
Độ phức tạp thuật toán:
- Trường hợp xấu nhất (Worst case): O(n^2)
- Trường hợp trung bình: O(n^2)
- Trường hợp tốt nhất (nếu mảng đã sắp xếp): O(n)
*/

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang ban dau: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
