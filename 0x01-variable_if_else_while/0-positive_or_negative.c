#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main: Entry point with no arguments to take
 * the function prints random numbers as to wether they are equal to zero, negative or positve
 * return- 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
