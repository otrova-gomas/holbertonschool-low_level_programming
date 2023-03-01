#include "main.h"

/**
 * rev_string - inverts  a string
 * @s: string to be reversed
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	if (s == 0)
		return;

	i = 0;
	j = 0;

	while (s[j] != '\0')
		j++;

	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
