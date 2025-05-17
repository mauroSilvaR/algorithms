#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H


#define MAX_INPUT_LEN 50

typedef struct 
{
    char name[MAX_INPUT_LEN]; //name of the character
    char game[MAX_INPUT_LEN]; //game of the character

}game_character;

void play_with_characters(void);
game_character *allocateGameCharacters(int n);
game_character *allocateGameCharacters(int n);


#endif /* end of GAME_CHARACTER_H */


