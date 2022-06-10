#include "main.h"

/**
 * print_numbers - A script that prints numbers from 0-9, and a new line
 *
 *
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
