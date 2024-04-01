#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isSquareNumber(int num) {
	int sqrt_num = sqrt(num);
	return sqrt_num * sqrt_num == num;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintSquareNumbers(int n) {
	int square_count = 0;
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = 1; i < n; i++) {
		if (isSquareNumber(i)) {
			printf("%d ", i);
			square_count++;
		}
	}
	printf("\nTong so chinh phuong nho hon %d la: %d\n", n, square_count);
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Vui long nhap so nguyen duong!\n");
	}
	else {
		countAndPrintSquareNumbers(n);
	}

	return 0;
}

