#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to the duplicate (second copy) of a new string.
 * @str: The string with the duplicate
 * Return: Returns NULL if str is NULL or if there's insufficient memory
 * Else - a pointer to the duplicated string is returned.
 */

char *_strdup(char *str)
{
	char *second_copy;
	int x, length = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		length++;

	second_copy = malloc(sizeof(char) * (length + 1));

	if (second_copy == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		second_copy[x] = str[x];
	second_copy[length] = '\0';

	return (second_copy);
}
