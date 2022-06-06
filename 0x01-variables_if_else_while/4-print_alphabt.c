#include <stdio.h>

/**
 * main - Entry point of the program
 * A program that prints the English alphabet in lowercase,
 * followed by a new \n
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
