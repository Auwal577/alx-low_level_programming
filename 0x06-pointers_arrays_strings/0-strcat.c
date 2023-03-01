/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*ptr != '\0')
    {
        ptr++;
    }

    while (*src != '\0')
    {
        *ptr++ = *src++;
    }

    *ptr = '\0';

    return dest;
}
