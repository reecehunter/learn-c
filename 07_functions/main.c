#include <stdio.h>

int sum(int x, int y) {
	int sum = x + y;
	return sum;
}



int main() {
	int a = 5, b = 10;
	int a_plus_b = sum(a, b);
	printf("Sum of %d + %d = %d.\n", a, b, a_plus_b);

	return 0;
}
