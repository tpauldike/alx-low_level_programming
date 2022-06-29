#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers with each
 * element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: Returns NULL for width <= 0, height <= 0, and if function fails;
 * Else, a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **_2D;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		_2D[height_index] = malloc(sizeof(int) * width);

		if (_2D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(_2D[height_index]);

			free(_2D);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			_2D[height_index][width_index] = 0;
	}

	return (_2D);
}
