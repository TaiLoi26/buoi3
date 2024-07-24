#include <stdio.h>
#include <stdlib.h>


long long sum(int n) {
	if (n == 0) {
		return 0; 
	}
	else {
		return n + sum(n - 1); 
	}
}

int main() {
	int n;
	long long result;


	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);


	result = sum(n);


	printf("Tong cac so tu 1 den %d la: %lld\n", n, result);
	system("pause");
	return 0;
}
