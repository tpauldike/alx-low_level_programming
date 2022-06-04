#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char topman;

	for (topman = 'z'; topman >= 'a'; topman--)
		putchar (topman);
	putchar ('\n');
	return (0);
}
