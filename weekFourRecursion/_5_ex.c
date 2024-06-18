#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *msg;

    printf("Enter: ");

    scanf("%s", msg);

    printf("%s\n", msg);

    return 0;
}

// segmentation fault- dynamic memory allocation