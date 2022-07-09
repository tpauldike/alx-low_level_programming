#include "main.h"

/**
 * _strstr - finds the first occurrence of the string “needle”
 * in 2the longer string “haystack”.
 * @haystack: the longer string.
 * @needle: the string to be scanned.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *ndl;

	while (*haystack != '\0')
	{
		hay = haystack;
		ndl = needle;

		while (*haystack != '\0' && *ndl != '\0' && *haystack == *ndl)
		{
			haystack++;
			ndl++;
		}
		if (!ndl)
			return (hay);
		haystack = hay + 1;
	}
	return (0);
}
