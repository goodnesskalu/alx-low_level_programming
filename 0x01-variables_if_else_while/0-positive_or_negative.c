#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the variable n will store a different value every time,
 * it executes and prints it,
 * Return: Always 0 when successful
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
