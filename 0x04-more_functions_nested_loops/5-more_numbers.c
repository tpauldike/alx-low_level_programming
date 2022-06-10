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
	int digit;
	int line;

	for (line = 0; line <= 9; line++)
	{
		for (for digit = 0; digit <= 14; digit++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
