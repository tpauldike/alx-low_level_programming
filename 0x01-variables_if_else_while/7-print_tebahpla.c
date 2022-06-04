#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char topman = 'z';

	for (topman = 'z'; topman >= 'a'; topman--)
	{
		putchar ((topman) + "\n");
	}
	return (0);
}
