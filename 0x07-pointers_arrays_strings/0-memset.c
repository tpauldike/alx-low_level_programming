#include "main.h"

/**
  * _memset - fills the memory with a constant bite
  * @n: The specified number of bytes
  * @s: The pointer of type char
  * @b: The constant byte
  * Return: Returns a pointer to the memory area 's'
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (b >= 0)
	{
		while (n >= 0)
		{
			(s, b, n);
			n++;
			_putchar (s);
		}
	}
	_putchar ('\n');
	return (s);
}
