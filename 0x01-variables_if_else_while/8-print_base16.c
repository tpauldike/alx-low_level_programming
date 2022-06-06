#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;

			if (ch == '9')
			{
				putchar(ch);
				ch = 'a';
			}
	}
	putchar('\n');
	return (0);
}
