#include "main.h"

/**
  * _strchr - locates a character in a string
  * @c: A character in the string
  * @s: The string
  * Return: returns a pointer to the first occurence of c
  * or NULL, if c is not found
  */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
