/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
