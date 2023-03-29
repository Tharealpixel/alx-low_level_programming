#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *            but only up to n bytes from src.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int i, j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }

        j = 0;
        while (j < n && src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }

        dest[i] = '\0';

        return (dest);
}
