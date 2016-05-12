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

	return 0;
}
