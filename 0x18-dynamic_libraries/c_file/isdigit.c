#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character entered
 * Return: returns 1 if the character is a digit and 0 if the character is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
