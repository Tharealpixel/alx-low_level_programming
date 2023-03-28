#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1] = {0};
    char valid_characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+1234567890";

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_index = rand() % (sizeof(valid_characters) - 1);
        password[i] = valid_characters[random_index];
    }

    printf("%s", password);

    return 0;
}
