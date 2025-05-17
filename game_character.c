#include <stdio.h>
#include <stdlib.h>
#include "game_character.h"


void play_with_characters(void)
{
    int i; // counter variable

    char user_input[MAX_INPUT_LEN];
    printf("how many characters you want to add? \n ");
    scanf("%s", user_input); 

    int characterQuantity = atoi(user_input);

    game_character *Game_characters = allocateGameCharacters(characterQuantity);

    // Open a file to write the characters to
    FILE *file = fopen("characters.txt", "w");
    if (file == NULL)
    {
        printf("ERROR while opening the file!\n");
        free(Game_characters);
        exit(1);
    }
    
    for(i=0;i<characterQuantity;i++)
    {
        fprintf(file,"%i | character:  %s | game: %s \n",(i+1),Game_characters[i].name,Game_characters[i].game);
        fprintf(file,"---------------------------------------------------------------------\n");
    }

    fclose(file);
    printf("\nCharacters successfully saved to characters.txt!\n");

    free(Game_characters); 

}