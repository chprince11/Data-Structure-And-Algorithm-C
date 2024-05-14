#include <stdio.h>
int main(int argc, char const *argv[])
{
    for( int i = 1; i <=10; i++ ) {
        
        if(i == 5) continue;
        
        printf("%i " , i);
    }
    return 0;
}

