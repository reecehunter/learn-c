#include <stdio.h>

int main() {
	int i = 0;

	for(i = 0; i < 5; i++) {
		printf("%d ", i);
	}

	printf("\n");

	i = 0;

	while(i < 5) {
		printf("%d ", i);
		i++;
	}

	printf("\n");
	
	i = 0;

	do {
		printf("%d ", i);
		i++;
	} while(i < 5);

	printf("\n");

	return 0;
}
