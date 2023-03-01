#include "main.h"

/**
* print_rev - prints string in reverse
* @s: points to string to be rev
* Return: return string in rev
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
t--;

while (t >= s)
{
_putchar(*t);
t--;
}

_putchar('\n');
}
