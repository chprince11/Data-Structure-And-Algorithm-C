#include <stdio.h>

struct {
    int height;
    int width;
} Rectangle, rec2; // this is the object


int main(int argc, char const *argv[])
{
    Rectangle.height = 10;
    Rectangle.width = 5;
    rec2.height = 10;
    rec2.width = 5;
    printf("The area is %d\n", Rectangle.height * Rectangle.width);
    printf("The area is %d\n", rec2.height * rec2.width);

    return 0;
}