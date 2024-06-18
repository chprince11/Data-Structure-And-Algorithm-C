#include <stdio.h>
#include <String.h>

int main (int argc, char* argv[])
{
    char String[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    
    int i=0;
    while(String[i] != 0)
    {
        printf("%c" , String[i]);
        i++;
    }
    
    return 0;
};
