

int* mallocArray(int n) {
    int* arr = new int[n]; // cấp phát động mảng có n phần tử
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

/*
Phân tích độ phức tạp không gian:

- Mảng được cấp phát động với n phần tử int → chiếm n * sizeof(int) byte.
- Ngoài ra không dùng thêm bộ nhớ đáng kể.

→ Độ phức tạp không gian là: O(n)
*/

