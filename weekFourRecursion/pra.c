#include <stdio.h>

int factorial(int);

int main(int argc, char* argv[])
{
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if( n > 1) {
        return n * factorial( n - 1);
    }

}

