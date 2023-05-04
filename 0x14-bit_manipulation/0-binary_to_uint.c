/**
 * _pow - calculates the value of a base raised to a power
 * @base: the base value
 * @exp: the exponent value
 *
 * Return: the result of the base raised to the power
 */
int _pow(int base, int exp)
{
    int result = 1;
    int i;

    for (i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary to convert
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int len = 0;
    int i;

    if (!b)
        return 0;

    while (b[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (b[i] == '1')
        {
            num += _pow(2, len - i - 1);
        }
        else if (b[i] != '0')
        {
            return 0;
        }
    }

    return num;
}

