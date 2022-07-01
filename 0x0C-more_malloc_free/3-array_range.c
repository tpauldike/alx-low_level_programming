#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an orderly array of integers
 * @min: The first and smallest value of the array.
 * @max: The last and largest value of the array.
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
