#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char *msg;
    msg = malloc(20); // how many bytes we want
    printf("Enter: ");
    scanf("%[^\n]", msg); 
    // gets(msg);  // Another way to print the string with a space in between
    printf("%s\n", msg);
    return 0;
}
