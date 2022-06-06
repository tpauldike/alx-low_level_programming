#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
    int y;

    for (y = 0; y <= 98; y++)
    {
            putchar((y / 10) + '0');
            putchar((y % 10) + '0');
            putchar(',');
            putchar(' ');
    }
    putchar('\n');
    return (0);
}