#include <stdio.h>

/**
 *main - Prints 10 times the alphabet in lowercase, followed by a new line
 *
 * Always Return: 0
 */
void main(void)
{
    int a, z;

    for (a = 0; a < 10; a++) {
        for (z = 'a'; z <= 'z'; z++) {
            putchar(z);
        }
        putchar('\n');
    }
}
