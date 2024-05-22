#include <stdio.h>

// 1st way to create the function
// Step:1 Create a function prototype

//Using the pointers 

void swap(int*, int*);

int main ( int argc, char* argv[])
{
    int a = 10;
    int b = 5;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;

}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("In function swap: a = %d, b = %d\n", *a, *b); 
}