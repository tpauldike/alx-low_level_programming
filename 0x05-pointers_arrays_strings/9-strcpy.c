#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by @src, including the terminating
 * null byte, to the buffer pointed to by @dest
 * @dest: The pointer to the buffer
 * @src: The pointer to the source string
 * Return: *dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
