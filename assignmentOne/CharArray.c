#include <stdio.h>

int main (int argc, char* argv[])
{
    char array[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    
    int size = sizeof(array) / sizeof(char);

    for (int i = 0; i < size; i++)
    {
        printf("%c" , array[i]);
    }

    printf("\n");

    return 0;
};
