#include <stdio.h>

/**
 * _strspn - determines the length of the maximal initial substring consisting
 * entirely of bytes in accept
 * @s: The string to be scanned for bytes in @accept
 * @accept: The string consisting of characters to match @s
 * Return: the length, in bytes, of the substring in @s that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break; /* break when a match is found */
			}
			j++;
		}
		if (!*(accept + j))
		{
			return (i); /* when no match found */
		}
		i++;
	}
	return (i);
}
