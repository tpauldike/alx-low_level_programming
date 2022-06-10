#include "main.h"

/**
 * more_numbers - prints 0 - 14 , ten times
 *
 *
 *
 * Return: 0
 */

void more_numbers(void)
{
	int digit, line;

	for (line = 0; line <= 9; line++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
			{
				_putchar((digit / 10) + '0');
			}
			_putchar((digit % 10) + '0');
		}
		_putchar ('\n');
	}
}
