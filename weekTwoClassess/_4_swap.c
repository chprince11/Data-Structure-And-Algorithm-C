#include <stdio.h>

// 1st way to create the function
// Step:1 Create a function prototype

void swap(int*, int*);

int main ( int argc, char* argv[])
{
    int a = 10;
    int b = 5;
    swap(&a, &b);
    printf("In function main: a = %d, b = %d\n", a, b);

    return 0;

}

void swap(int x, int y) 
{
    int temp = x;
    x = y;
    y = temp;
    printf("In function swap: a = %d, b = %d\n", x, y);
}