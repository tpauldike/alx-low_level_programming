#include<stdio.h>

/**
 * main - Entry pint
 * Return: 0
 */
int main(void)
{
	int ch;

	ch = '0';

	while (ch <= '9')
	{
		putchar(ch);

		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
