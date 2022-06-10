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

	for (line = 0; line <= 10; line++)
	{
		for (for digit = 0; digit <= 14; digit++)
		{
			_putchar (digit);
		}
		_putchar ('\n');
	}
}
