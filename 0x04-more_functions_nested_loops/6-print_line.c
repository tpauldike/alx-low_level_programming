#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 *@n: the number of times the character _ should print
 *
 * Return: 0
 */

void print_line(int n)
{
	int n;
	char l;

	l = _;
	if (n <= 0)
	{
		continue;
	}
	else
		_putchar (l);
	_putchar ('\n');
}
