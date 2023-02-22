
#include <stdio.h>

/**
 * main - Prints alphabet backwards.
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char zA;

	for (zA = 'z'; zA >= 'a'; zA--)
		putchar(zA);
	
	putchar('\n');
	return (0);
}
