/**
 * cap_string - Capitalizes all words in a string.
 *
 * @s: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *s)
{
  int i;

  /* Capitalize the first letter, if it exists */
  if (s[0] >= 'a' && s[0] <= 'z')
    s[0] -= 32;

  /* Capitalize subsequent letters after separators */
  for (i = 1; s[i] != '\0'; i++)
  {
    if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
        s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
        s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
        s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
        s[i - 1] == '}')
    {
      if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;
    }
  }

  return s;
}
