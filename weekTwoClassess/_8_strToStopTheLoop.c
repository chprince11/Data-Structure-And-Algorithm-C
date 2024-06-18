#include <stdio.h>
#include <String.h>

int main (int argc, char* argv[])
{
    char String[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    int length = strlen(String);

    for (int i = 0; i < length; i++)
    {
        printf("%c" , String[i]);
    }
    // printf("\n");

    return 0;
};
