#include <stdio.h>

int main (int argc, char *argv[]) {
	printf("Hello world!\n");
	if (argc > 1) {
		printf("This is the argument provided: %s\n", argv[1]);
	}

	return 0;
}
