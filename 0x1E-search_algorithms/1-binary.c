#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted arrayay of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end, mid, i;

	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");

		for (i = start; i <= end; i++)
			i < end ? printf("%d, ", array[i]) : printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			end = mid - 1;

		else
			start = mid + 1;
	}
	return (-1);
}
