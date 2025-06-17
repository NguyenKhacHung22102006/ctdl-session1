#include <iostream>
using namespace std;

bool hasDuplicate2(int arr[], int n) {
    bool seen[1001] = {false}; // vì phần tử trong khoảng 0–1000

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) return true;
        seen[arr[i]] = true;
    }
    return false;
}

/*
Độ phức tạp:
- Thời gian: O(n)
- Không gian: O(1) (vì 1001 là hằng số)
*/
