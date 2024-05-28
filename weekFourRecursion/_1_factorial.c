#include <stdio.h>

int factorial (int);
int main(int argc, char** argv)
{
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    
    return 0;
}

int factorial(int n) {
    int ans = 1;
    // 1x2x3x4x5
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
    
}
