#include "main.h"

/**
 * puts2 - Prints every other chactr
 *
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
int i;

if (str == 0)
return;

for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);

_putchar('\n');
}
