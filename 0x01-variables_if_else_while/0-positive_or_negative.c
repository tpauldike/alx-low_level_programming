#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Return: Always return (0)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		/* if a is lesser than zero, print the following */
		printf("%i is negative\n", n);
	}
	else
	{ /* else, if a is greater than zero. print the following */
		if (n > 0)
		{ /* otherwise, print the following statement */
			printf("%i is positive\n", n);
		}
		else
		{
			printf("%i is zero\n", n);
		}
	}
	return (0);
}
