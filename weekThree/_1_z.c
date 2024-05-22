#include <stdio.h>

int main (int argc, char* argv[]) 
{
    char array[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    int arrayLength = strlen(array);

    for (int i = 0; i < arrayLength; i++) 
    {
        printf("%c", array[i]);
    }
    
    printf("\n");
    
    return 0;
};
