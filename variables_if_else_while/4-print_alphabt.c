#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print the alphabet without q and e.
 *
 *
 * Return: Always 0
 */
int main(void)
{
  char aa;

 for(aa = 'a'; aa <= 'z'; aa++)
   if (aa != 'e' && aa != 'q')
   putchar(aa);


	putchar('\n');
	
	return (0);
}
