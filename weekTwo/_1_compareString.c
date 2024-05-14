#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[] = "a";
    char str2[] = "A";
    int returnValue = 0;

    if ( (returnValue = strcmp(str1, str2)) > 0)
    {
        printf("str1 > str2\n");
    }
    else if ( (returnValue = strcmp(str1, str2)) < 0) {
        printf("str1 < str2\n");
    }else {
        printf("They are the same\n");
    }

    printf("The return value is %d\n", returnValue);
    
    return 0;
}
// strcmp(string1, string2) - return 0 when they are equal, +ve when str1 > str2, -ve when str1 < str2

/*
    - We can use == for comparing numbers
    
    num1 = 10, num2 = 5
    if( num1 == num2) {
        printf("They are equal!")
    } else if( num1 != num2) {
        printf("They are not equal!");
    } else if ( num1 > num2) {
        printf("num1 is greater than num2");
    }
*/
