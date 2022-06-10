#include "main.h"

/**
 * print_numbers - A script that prints numbers from 0-9, and a new line
 *
 * @i: the integer to be printed
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	if (i >= 48 && i <= 57)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
	return (0);
}
