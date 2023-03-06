/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n == *haystack && *n != '\0' && *haystack != '\0')
{
haystack++;
n++;
}
if (*n == '\0')
return (h);
haystack = h + 1;
}
return (NULL);
}
