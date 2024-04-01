#include <stdio.h>

// Hàm kiểm tra xem một số có phải là bội của 7 hay không
int isMultipleOf7(int num) {
	return num % 7 == 0;
}

// Hàm xuất các số nguyên có 2 chữ số và là bội của 7
void printTwoDigitMultiplesOf7() {
	printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
	for (int i = 10; i < 100; i++) {
		if (isMultipleOf7(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	printTwoDigitMultiplesOf7();
	return 0;
}

