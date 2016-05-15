#include <stdio.h>
#include "funfunctions.h"

int main (int argc, char *argv[]) {
	printf("Hello world!\n");

	if (argc > 1) {
		int i;
		for (i = 1; i < argc; i++) {
			printf("This is the argument provided: %s\n", argv[i]);
		}
	}
	int num = five();
	printf("Here's a number I got: %d\n", num);
	printf("Thanks, five()!\n");

	printf("Here's how many accounts we have (don't ask what kind, I don't know either): %d\n", NUM_ACCOUNTS);



	int var2 = 15;
	int *var_ptr;

	var_ptr = &var2;

	printf("This is the memory address of var2: %x\n", &var2);

	/* The address stored in the pointer variable */
	printf("Address stored in our pointer variable: %x\n", var_ptr);

	/* Access the value stored at the pointer */
	printf("The value of the pointer variable *var_ptr is: %d\n", *var_ptr);

	return 0;
}
