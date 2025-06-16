#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

/*
Độ phức tạp thuật toán:
- Thời gian (Time complexity): O(n), phải duyệt toàn bộ mảng
- Không gian (Space complexity): O(1), không sử dụng thêm bộ nhớ phụ
*/

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2; // phần tử cần đếm

    int result = countOccurrences(arr, n, x);

    cout << "So lan xuat hien cua " << x << " la: " << result << endl;

    return 0;
}
