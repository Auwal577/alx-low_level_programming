/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: difference between ASCII values of first non-matching characters
 */
int _strcmp(const char *s1, const char *s2)
{
int i;
for (i = 0; s1[i] == s2[i]; i++)
{
if (s1[i] == '\0')
{
return (0);
}
}
return (s1[i] - s2[i]);
}
