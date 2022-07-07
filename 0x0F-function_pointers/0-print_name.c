/* A function that prints a name */
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the array that stores the name
 * @f: a function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
