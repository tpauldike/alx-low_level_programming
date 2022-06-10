#include "main.h"

/**
 * print_most_numbers - Prints 0 - 9, except 2 and 4
 *
 *
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int Topman;

	for (Topman = '0'; Topman <= '9'; Topman++)
	{
		if (Topman == '2' || Topman == '4')
		{
			continue;
		}
		_putchar (Topman);
	}
	_putchar ('\n');
}
