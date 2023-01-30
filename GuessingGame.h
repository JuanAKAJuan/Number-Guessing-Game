#ifndef NUMBER_GUESSING_GAME_GUESSINGGAME_H
#define NUMBER_GUESSING_GAME_GUESSINGGAME_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class GuessingGame {
    private:
    char returnToMenu;
    int cpuGuess;
    int menuChoice;
    int difficultyChoice;
    int randomNumber;
    int numberGuessed;

    public:
    /* The player will be asked to select what menu they want to enter or if they want to quit.
     * @pre: The player will select between choices 1-3.
     * @post: The player will be taken to the Difficulty Menu.
     */
    void GameMenu();
    /* The player will be asked to choose their difficulty for the game.
     * @pre: The player will select between choices 1-3.
     * @post: The game will begin with the difficulty the player chose.
     */
    void DifficultyMenu();
    void Scoreboard();
    void ReturnToMenu();
    void EasyGame();
    void MediumGame();
    void HardGame();

    void GenerateRandomNumber();
    /* Accessors */
    /* Mutators */


};


#endif //NUMBER_GUESSING_GAME_GUESSINGGAME_H
