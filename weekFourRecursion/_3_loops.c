#include <stdio.h>

void loop(void);

int main(int argc, char* argv[])
{
    loop();
    return 0;
}

void loop(){
    // for(;;){
    //     printf("Hello...\n");
    // }

    printf("Hello...\n");
    loop();
}
