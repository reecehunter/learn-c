#include <stdio.h>

int main() {
	int num = 10;
	int* p_num = &num;
	int destructured_num = *p_num;

	printf("num value is %d.\n", num);
	printf("num pointer (memory address): %p.\n", p_num);
	printf("Destructured num pointer: %d.\n", destructured_num);
	printf("\n");

	char vegetables[5][25] = {"Carrot", "Broccoli", "Squash", "Celery", "Cucumber"};
	for(int i = 0; i < 5; i++) {
		char *veggie = vegetables[i];
		printf("Vegetable name: %s (memory address: %p).\n", veggie, veggie);
	}

	return 0;
}
