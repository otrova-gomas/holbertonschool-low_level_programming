#include "main.h"

/**
 * _puts - print a string
 *@string : variable 
 *Return: string
 */
void _puts(char *string)
{
int i;
for (i = 0; string[i] != '\0'; i++)
{
_putchar(string[i]);
}
 _putchar('\n');
}
