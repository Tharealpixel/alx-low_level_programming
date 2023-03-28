#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_index = rand() % (sizeof(valid_characters) - 1);
        password[i] = valid_characters[random_index];
    }

    password[i] = '\0';  // add null terminator at the end

    printf("%s", password);

    return 0;
}

