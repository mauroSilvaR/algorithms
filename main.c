#include <stdio.h>
#include <stdlib.h>
#include "game_character.h"

// function prototypes
void play_bubble_sort_alg(void);
void play_quick_sort_alg();
void play_not_supported_alg();


int main(int argc, char *argv[])
{   // Check argc to garantee right amount of arguments
    if (argc != 2) {
        printf("Usage: %s <0|1>\n", argv[0]);
        return 1;
    }
    
    // on the cline, commands are strings, we just convert them to int to compare here
    int option = atoi(argv[1]);

    // actually handle the desired algorithm and tell a bit about it for embelishment
    switch (option)
    {
        case 0:
        {
            play_with_characters();
            break;
        }
        case 1:
        {
            play_bubble_sort_alg();
            break;

        }
        case 2:
        {
            play_quick_sort_alg();
            break;

        }
        default:
        {
            play_not_supported_alg();
            break;
        }

    }

    return 0;
}

void play_quick_sort_alg(void)
{
    printf("Quick sort snot Implemented Yet, exiting...\n");

}

void play_not_supported_alg(void)
{
    printf("the seleted algorithm is not yet supported, please type a valid one.\n");
    printf("valid algorithms on v1.0:\n");
    printf("bubble sort algorithm - 0\n");

}

void play_bubble_sort_alg(void)
{
    printf("Bubble sort not Implemented Yet, exiting...\n");

}

