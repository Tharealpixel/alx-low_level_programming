#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LEN 12

int main(void)
{
    char pass[PASS_LEN + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASS_LEN; i++) {
        int r = rand() % 62;
        if (r < 26) {
            pass[i] = 'a' + r;
        } else if (r < 52) {
            pass[i] = 'A' + r - 26;
        } else {
            pass[i] = '0' + r - 52;
        }
    }
    pass[PASS_LEN] = '\0';

    printf("%s", pass);

    return 0;
}

