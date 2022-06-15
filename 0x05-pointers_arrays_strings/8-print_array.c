#include "main.h"

/**
 * print_array - A function that prints 'n' elements of an array of inteers
 * @a: The array of integers
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
