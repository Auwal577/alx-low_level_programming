/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
  int i, j;
  char *leet_str = str;

  char letters[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
  char numbers[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

  for (i = 0; leet_str[i] != '\0'; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (leet_str[i] == letters[j])
      {
        leet_str[i] = numbers[j];
        break;
      }
    }
  }

  return leet_str;
}
