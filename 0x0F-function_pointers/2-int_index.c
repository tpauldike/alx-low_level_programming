/* A function that searches for an integer */
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in @array
 * @array: the array of type int
 * @size: the size of the array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: returns the index of the first element for which the @cmp does not
 * return 0; returns -1 if no elment matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
