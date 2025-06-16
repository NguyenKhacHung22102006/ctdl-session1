#include <stdio.h>

int main() {
    int n = 10; // Giả sử n = 10
    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }
    return 0;
}

/*
Phân tích độ phức tạp thời gian:

- Vòng lặp for chạy từ i = 0 đến i < n → thực hiện n lần.
- Trong mỗi vòng lặp chỉ có một lệnh printf.

=> Tổng số lần thực hiện lệnh là tuyến tính theo n.

=> Độ phức tạp thời gian: O(n)
*/

