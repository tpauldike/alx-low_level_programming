#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Return: (0)
  */
int main(void)
{
	int n;
	int y = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (y > 5)
	{
		printf("The last digit of %i is %i and is greater than 5\n", n, y);
	}
	else
	{
		if (y = 0)
		{
			printf("The last digit of %i is %i and is 0\n", n, y);
		}
	}
	else
	{
		printf("The last digit of %i is %i and is less than 6 and not 0\n", n, y);
	}
	Return (0);
}
