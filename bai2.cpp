

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}

/*
Phân tích độ phức tạp thời gian:

- Biến `i` bắt đầu từ 1 và mỗi lần lặp được nhân đôi: i = 1, 2, 4, 8, ..., < n.
- Số lần lặp là số lần cần nhân 2 để từ 1 đạt tới n.

→ Số vòng lặp ≈ log₂(n)

=> Độ phức tạp thời gian là: O(log n)
*/

