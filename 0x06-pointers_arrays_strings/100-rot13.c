#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13 encryption
 * @str: Input string to be encoded
 *
 * Return: A pointer to the encoded string, or NULL on failure
 */
char *rot13(char *str)
{
char *result = malloc(sizeof(char) * (strlen(str) + 1));
int i;
char c;
if (!result)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
if (c >= 'a' && c <= 'z')
{
c = ((c - 'a' + 13) % 26) + 'a';
}
else if (c >= 'A' && c <= 'Z')
{
c = ((c - 'A' + 13) % 26) + 'A';
}
result[i] = c;
}
result[i] = '\0';
return (result);
}
