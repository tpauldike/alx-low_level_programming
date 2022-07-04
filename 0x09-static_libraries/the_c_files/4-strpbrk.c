#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - finds the first occurence of any byte in @accept
 * @s: The string to be scanned
 * @accept: The string consisting of the characters to be matched
 * Return: returns the location of the first occurence of the byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *ptr;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
