#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// purpose of it , is allocaiton of memory dynamically
typedef struct {
    int width;
    int height;
} rectangle;

// function prototype
int calArea(rectangle);

// function prototype pointer
int calculateArea(rectangle*);

int main(int argc, char* argv[])
{
    rectangle rect1;
    rectangle *rect2;
    rect1.width = 10;
    rect1.height = 20;
    printf(" The area of the react 1 is %d\n ", calArea(rect1));

    // rect2 = &rect1;

    rect2 = malloc(sizeof(rectangle)); // pointing to heap memory address
    assert(rect2);
    rect2 -> width = 50;
    rect2 -> height = 30;

    printf("The area of the react 2 is %d\n ", calculateArea(rect2));
    free(rect2);

    return 0;
}

int calArea(rectangle rect) {
    return rect.width * rect.height;
} 
int calculateArea(rectangle* rect) {
    return rect->width * rect->height;
} 

// Both correct
// int *pt;
// int* pt;

// Both correct
// int []num;
// int num[];

// struct is a record, it is not Data Structures, many attruibues inside a record

// Arrays