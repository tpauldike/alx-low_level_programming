#include "main.h"

/**
 * _strlen - A functiom that returns the length of a d'string
 * @s: The pointer to the string
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;
	return (len);
}
