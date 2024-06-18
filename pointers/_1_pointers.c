#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 7;
    int *ptra = &a;
    // ex of NULL pointer
    // int* ptr2 = NULL; 
    // a garbage value if we will not assign anything

    printf("The value of a is %d\n", a);
    printf("The value of a using pointer is %d\n", *ptra);
    // printf("The number 7 in Hexa decimal format %p\n", *ptra);
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    
    // printf("The address of some garbage is %p\n", ptr2);
    return 0;
}

// NULL pointer 
// int *ptr = NULL;

/*
Use of Pointer

1) Dynamic memory allocation
2) Pointer reduces the code and improve the performance

*/ 

