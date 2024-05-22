#include <stdio.h>

int main(int argc, char* argv[]) 
{
    char string;
    
    while (1) // Infinite loop until a valid character is entered
    {
        printf("Please enter a character: ");
        scanf(" %c", &string); // Note the space before %c to consume any preceding whitespace
        
        switch (string)
        {
        case 'a':
            printf("In case 'a'...\n");
            break;

        case 'b':
            printf("In case 'b'...\n");
            break;

        case 'c':
            printf("In case 'c'...\n");
            break;

        default:
            printf("Invalid character! Try again.\n");
            continue; // Continue the loop to ask for input again
        }

        // Break the loop if a valid character is entered
        break;
    }

    return 0;
}
