#include <stdio.h>
#include <stdlib.h> // For system("pause")

int main() {
	int n;
	long long sum = 0;

	// Nhập số nguyên dương n từ bàn phím
	printf("NNhap so nguyen duong n: ");
	scanf_s("%d", &n);

	// Tính tổng các số từ 1 đến n bằng vòng lặp
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}

	// In kết quả tổng ra màn hình
	printf("Tong cac so tu 1 den %d la: %lld\n", n, sum);

	// Dừng chương trình và chờ người dùng nhấn Enter trước khi kết thúc
	system("pause");

	return 0;
}
