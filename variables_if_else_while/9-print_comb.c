#include <stdio.h>

/**
 * main - print all possible combinations of numbers between 0-9
 *
 *
 */
int main(void)
{
  int sdn;

for (sdn = 0; sdn <=9; sdn++)
{
putchar((sdn % 10) + '0');
if (sdn==9)
continue;
putchar(',');
putchar(' ');
}
putchar ('\n');
return (0);
}
