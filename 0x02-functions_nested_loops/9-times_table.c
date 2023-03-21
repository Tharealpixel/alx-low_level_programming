#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
    int i, j, res;

    for (i = 0; i <= 9; ++i)
    {
        printf("%d", 0);
        for (j = 1; j <= 9; ++j)
        {
            printf(", ");
            res = i * j;

            /*
             * put space if product is a single number
             * place the first digit if its two numbers
            */
            if (res <= 9)
                printf(" ");
            else
                printf("%d", res / 10);

            printf("%d", res % 10);
        }
        printf("\n");
    }
}

