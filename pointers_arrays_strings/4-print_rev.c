#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: points to string to be rev
 * Return: reversed string
 */

void print_rev(char *s)
{
    int length = 0;
    char *t = s;

    while (*t != '\0')
    {
        length++;
        t++;
    }

    while (t >= s)
    {
       _putchar(*t);
        t--;
    }

    _putchar('\n');
}
