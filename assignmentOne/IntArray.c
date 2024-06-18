#include <stdio.h>

int main (int argc, char* argv[])
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n" , array[i]);
    }

    return 0;
};
