/*
 * A function that executes a function given as a parpmeter on each elements of
 * an array.
 */
#include "function_pointers.h"

/**
 * array_iterator - executes the funtion given to @array on each @size elements
 * @array: An array of integers
 * @size: The size of the array
 * @action: The function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
