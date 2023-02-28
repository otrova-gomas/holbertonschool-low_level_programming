#include "main.h"

/**
*times_table - prints 9 mult table                                                                                                                                                                                                                                                                                                                                                         *                                                                                                                                                                                                                                                                                                                                                                                          */

void times_table(void)
{
int num1, num2, result;

for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (num2 = 1; num2 <= 9; num2++)
{

result = (num1 * num2);
if ((result / 10) > 0)
{
_putchar((result / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((result % 10) + '0');

if (num2 != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
