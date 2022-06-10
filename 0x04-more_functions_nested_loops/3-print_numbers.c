#include "main.h"

/**
 * print_numbers - A script that prints numbers from 0-9, and a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
