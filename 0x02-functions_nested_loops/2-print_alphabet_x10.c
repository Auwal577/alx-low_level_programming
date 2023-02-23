#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(letter);
letter++;
}
letter = 'a';
_putchar('\n');
}
}
