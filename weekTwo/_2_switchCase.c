#include <stdio.h>

int main(int argc, char const *argv[])
{
    int day = 2;
    switch (day)
    {
    case 1: 
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;
    
    default:
    printf("Invalid input!");
        break;
    }
    return 0;
}
