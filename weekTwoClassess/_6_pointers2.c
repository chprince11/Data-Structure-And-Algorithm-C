#include <stdio.h>

typedef struct
{
    int x;
    int y;

}point;


int main ( int argc, char* argv[])
{
    char a = 'a';
    char b = 'b';
    char* pt1;
    pt1 = &a;
    char* pt2 = &b;

    printf("Address of a = %p\n", &a);
    printf("Address of a = %p\n", pt1);
    printf("Address of b = %p\n", &b);
    printf("Address of b = %p\n", &pt2);

    printf("The value of a = %c\n", a);
    printf("The value of b = %c\n", b);
    printf("The value of a = %c\n", *pt1);
    printf("The value of b = %c\n", *pt2);

    point A;
    A.x = 2;
    A.y = 3;

    printf("Point A: x = %d\n", A.x);
    printf("Point A: y = %d\n", A.y);

    point* pt3;
    pt3 = &A; 
    // can't do this step it will show the error

    printf("Point A:x = %d\n ", pt3->x);

    return 0;

}