#include <stdio.h>

typedef struct {
    int height;
    int width;
} Rectangle ;

int calArea(Rectangle);

int main(int argc, char const *argv[])
{
    Rectangle rect1, rect2;

    rect1.height = 10;
    rect1.width = 5;
    printf("The area is %d\n", rect1.height * rect1.width);
    rect2.height = 5;
    rect2.width = 20;
    printf("The area for rect1 is %d\n", calArea(rect1));
    printf("The area for rect2 is %d\n", calArea(rect2));

    return 0;
}

int calArea(Rectangle rect) {
    return rect.width * rect.height;
}