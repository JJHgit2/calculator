#include <stdio.h>
#include <stdlib.h>
#include "eval.h"https://github.com/JJHgit2/calculator/blob/main/calculator.c
#define BUFFERSIZE (256)

int main(void) {
	char input[BUFFERSIZE];
	
	printf("Enter your expression: ");
	fflush(stdout);
	fgets(input, BUFFERSIZE, stdin);
	printf("Result is: %.2f\n", evaluate(input));
	printf("201730302 END\n");
	return EXIT_SUCCESS;
}
