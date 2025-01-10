#include <stdio.h>

// Adds two integers and returns the result.
int sum(int x, int y) {
	int sum = x + y;
	return sum;
}

// Prints each integer in an array.
void display(int* nums, size_t length) {
	for(size_t i = 0; i < length; i++) {
		int num = nums[i];
		printf("%d ", num);
	}
	printf("\n");
}

int main() {
	// Initialize integers and pass them to the sum function.
	int a = 5, b = 10;
	int a_plus_b = sum(a, b);
	printf("Sum of %d + %d = %d.\n", a, b, a_plus_b);

	// Initialize an array of integers and pass them to the display function.
	int nums[5] = {1, 2, 3, 4, 5};
	printf("Array values: ");
	display(nums, 5);

	return 0;
}
