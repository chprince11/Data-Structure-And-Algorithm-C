#include <stdio.h>

int main(int argc, char* argv[])
{
    // pointer arithmetic
    // ++ , -- , + , -
    int a = 34;
    int* ptra = &a;

    printf("%d\n", ptra); // 6422296
    printf("%d\n", ptra++); // 6422296
    printf("%d\n", ptra + 1); // 6422300   // 1 int = 4 bytes increased

    // Array - pointer

    int arr[] = {1,2,3,4,5,6,67};
    
    printf("%d\n" , arr[0]);
    printf("%d\n" , *(&arr[0]));
    printf("%d\n" , arr);
    printf("%d\n" , &arr[0]);
    printf("%d\n" , &arr[1]);
    printf("%d\n" , arr + 1);
    
    return 0;
}
