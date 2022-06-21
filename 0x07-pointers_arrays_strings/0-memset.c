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
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
