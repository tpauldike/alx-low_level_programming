include "main.h"

/**
 * print_numbers - A script that prints numbers from 0-9, followed by a new line
 *
 * @i: the integer to be printed
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
	return (0);
}
