#include "main.h"
/**
 * print_number - Prints an integer to the console using _putchar().
 * @n: The integer to be printed.
 */
int _putchar(char c);

void print_number(int n)
{
if (n < 0) /* Handle negative numbers */
{
_putchar('-');
n = -n;
}
if (n / 10) /* Recursive call for digits beyond the first one */
{
print_number(n / 10);
}
_putchar((n % 10) + '0'); /* Print the last digit */
}
