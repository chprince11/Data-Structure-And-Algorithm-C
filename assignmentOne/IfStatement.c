#include <stdio.h>

int main (int argc, char* argv[])
{
    int x = 3;
    int y = 3;
    int z = 0; 

    if ( x > 2 )
    {
        if ( y > 2 ) 
        {
            z = x + y;
            printf("z is %d\n " , z);
        };
    }
    else 
    {
        printf(" x is " , x);
    };

    return 0;
};
