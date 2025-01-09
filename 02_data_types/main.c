#include <stdio.h>

int main() {
	char c = 'X';
	char str[] = "Hello world!";
	
	int i = 10; // Integer with no decimals.
	unsigned int ui = 5; // Non-negative integer. "Unsigned" can be added to
			     // other number data types.
	float f = 8.0f; // Number with decimals.
	double d = 30.0; // Float with "double" precision.
	long l = 1000L; // Integer but can hold higher/lower values. Other number
			// data types can be prefixed with "long" to add more precision.


	printf("char c is %c.\n", c);
	printf("string str %s.\n", str);
	printf("int i is %d.\n", i);
	printf("unsigned int ui is %d.\n", ui);
	printf("float f is %f.\n", f);
	printf("double d is %f.\n", d);
	printf("long l is %li.\n", l);
	
	return 0;
}
