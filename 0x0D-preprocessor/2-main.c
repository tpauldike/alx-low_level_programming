/* A program that prints the name of the it was compiled with */
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	printf("The file name is: %s\n", __FILE__);

	return (0);
}
