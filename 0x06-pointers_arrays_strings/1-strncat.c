/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
        dest_len++;

    // Concatenate the source string with the destination string
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    // Add the null terminator to the resulting string
    dest[dest_len + i] = '\0';

    // Return a pointer to the resulting string dest
    return dest;
}

