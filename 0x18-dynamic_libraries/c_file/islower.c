#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 *
 * @c: The character is in ASCII code
 *
 * Return: returns 1 is c is lowercas, returns 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
