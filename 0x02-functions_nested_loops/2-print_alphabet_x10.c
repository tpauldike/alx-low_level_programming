#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet in ten lines
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar (abc);

		for (i = 0; i <= 10; i++)
		{
			_putchar ('\n');
		}
	}
}
