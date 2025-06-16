int sumFormula(int n) {
    return n * (n + 1) / 2;
}

/*
Độ phức tạp thời gian: O(1)
→ Vì chỉ thực hiện phép tính đơn lẻ, không có vòng lặp.
*/
#include <iostream>
using namespace std;

int sumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

/*
Độ phức tạp thời gian: O(n)
→ Vì vòng lặp chạy từ 1 đến n.
*/

