#include <stdio.h>

int main (int argc, char* argv[])
{
    int Math = 78;
    int English = 82;
    int Physics = 90;
    double average = 0;

    average = (Math + English + Physics) / 3.0;

    printf("The average is %.2f\n", average);

    return 0;
};
