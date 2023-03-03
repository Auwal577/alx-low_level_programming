#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0, l = 0, sum = 0;
char tmp;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= size_r || j >= size_r || size_r == 0)
return (0);
r[size_r - 1] = '\0';
i--, j--, size_r--;
while (i >= 0 || j >= 0)
{
sum += (i >= 0) ? n1[i--] - '0' : 0;
sum += (j >= 0) ? n2[j--] - '0' : 0;
r[size_r-- - 2] = (sum % 10) + '0';
sum /= 10;
k++;
}
if (sum == 1)
r[size_r-- - 2] = '1';
else
k--;
for (l = 0; l < k / 2; l++)
{
tmp = r[l];
r[l] = r[k - l - 1];
r[k - l - 1] = tmp;
}
if (size_r < 0)
return (0);
else
return (r + size_r);
}
