#include <stdio.h>

typedef struct  {
    int height;
    int width;
} Rectangle; // this is an object

// function prototype

int calArea( Rectangle );

int main (int argc, char* argv[]) {
    Rectangle r1;
    r1.height = 10;
    r1.width = 10;
    
    printf("The area of rectangle is %d" , calArea(r1));

    return 0;
}

int calArea( Rectangle rect) {
    return rect.height * rect.width;
}