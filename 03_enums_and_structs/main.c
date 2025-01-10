#include <stdio.h>
#include <string.h>

// An enum defines set of named integer constants.
enum week{Sun, Mon, Tue, Thur, Fri, Sat};

// A struct groups related values together.
struct Human {
	char name[25];
	short int age;
	float height;
};

int main() {
	// ENUM //
	
	// Declare a variable called "day" of type "enum week".
	// The result is an integer.
	enum week day = Fri;

	// Print the enum integer value.
	printf("Friday is the %d day of the week.\n", day + 1);	


	// STRUCT //

	// Initialize a Human struct called "bob".
	struct Human bob;

	// Modify bob's values.
	strcpy(bob.name, "Robert");
	bob.age = 24;
	bob.height = 6.0F;

	// Print bob's values.
	printf("%s is %d years old and %.2f feet tall.\n", bob.name, bob.age, bob.height);

	return 0;
}
