#include <stdio.h>
void loop(int);
int main(int argc, char const *argv[])
{
    loop(10);
    return 0;
}

void loop(int n){
    if( n >0){
        printf("Hello...\n");
        loop(n-1);
    }
    printf("%d\n", n);

}
