#include <stdio.h>

int main (int argc, char* argv[]) 
{
    char array[] = {"Hello World!"};

    int size = strlen(array);

    for (int i = 0; i < size; i++) 
    {
        printf("%c", array[i]);
    }
    
    printf("\n");
    
    return 0;
};
