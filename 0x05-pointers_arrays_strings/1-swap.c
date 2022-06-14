#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: The first interger of value 98
 * @b: The second integer of value 42
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
