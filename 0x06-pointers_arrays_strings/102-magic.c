
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: None (void).
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar((n % 10) + '0');
}

int main(void)
{
    int n = 98;
    int *p = &n;

    /* Add this line */
    print_number(*((p + 2) - 2));
    _putchar('\n');

    return (0);
}
