#include <stdio.h>

int factorial (int);
int main(int argc, char** argv)
{
    int n = 5;
    printf("This is Recursion\n");
    printf("%d! = %d\n", n, factorial(n));
    
    return 0;
}

// Recursion comes into consideration:
// why to use recursion: To avoid stackover flow
// 1) recursive rule
// 2) base case, ex: 0 or 1
// stack helps us to use backtracking
int factorial(int n) {
    // 5! = 5x4x3x2x1
    // 5! = 5x4!
   if( n > 1){
    return n * factorial(n -1);
   } else{
    return 1; // this is the base case
   }
   
}
