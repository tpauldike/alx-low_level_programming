#include <stdio.h>

/**
 * main - Entry point of the program
 * A program that prints the English alphabet in lowercase, followed by a new \n
 * Return: 0
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar (lowercase);
	putchar ('\n');
	return (0);
}
