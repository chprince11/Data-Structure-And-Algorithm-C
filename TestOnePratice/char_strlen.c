#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    char a[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    for(int i=0; i<strlen(a);i++) {

    printf("%c" , a[i] );

    }
    
    printf("\n");

    return 0;
}