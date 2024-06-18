#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char* argv[])
{
    char *msg;
    msg = malloc(20); // how many bytes we want
    // msg = NULL;
    assert(msg); // will confirm do we need a memory, and program will continue.
    printf("Enter: ");
    scanf("%[^\n]", msg); 
    printf("%s\n", msg);
    free(msg); // always use free when we use malloc, it will still holds the value
    return 0;
}
