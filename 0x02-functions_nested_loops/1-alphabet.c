#include "main.h"

void print_alphabet(void)
{
char letter = 'a';
int i;
for (i = 0; i < 26; i++)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

