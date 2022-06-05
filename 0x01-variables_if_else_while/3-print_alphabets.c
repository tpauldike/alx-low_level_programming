#include <stdio.h>
/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
	char o;
	char O;

	for (o = 'a'; o <= 'z'; o++)
		putchar (o);
	for (O = 'A'; O <= 'Z'; O++)
		putchar (O);
	putchar ('\n');
	return (0);
}
