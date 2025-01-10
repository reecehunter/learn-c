#include <stdio.h>

int main() {
	// Define a constant size for our arrays.
	const int SIZE = 5;
	// Initialize an array of 5 integers with all values set to 0.
	int nums[SIZE] = {0, 0, 0, 0, 0};
	// Initialize an array of 5 strings (max 25 characters each).
	char vegetables[SIZE][25] = {"Carrot", "Broccoli", "Squash", "Celery", "Cucumber"};

	// Increment each integer in the int array.
	for(int i = 0; i < SIZE; i++) {
		nums[i] = i;
	}

	// Print each integer in the int array.
	printf("nums: ");
	for(int i = 0; i < SIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");

	// Print each string in our string array.
	printf("Vegetables: ");
	for(int i = 0; i < SIZE; i++) {
		printf("%s ", vegetables[i]);
	}

	return 0;
}
