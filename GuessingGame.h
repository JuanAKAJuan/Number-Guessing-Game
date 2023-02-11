#ifndef NUMBER_GUESSING_GAME_GUESSINGGAME_H
#define NUMBER_GUESSING_GAME_GUESSINGGAME_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class GuessingGame
{
    private:
        char returnToMenu;
        int cpuGuess;
        int playerScore = 0;
        int cpuScore = 0;
        int menuChoice;
        int difficultyChoice;
        int randomNumber;
        int numberGuessed;

    public:
        /* The player will be asked to select what menu they want to enter or if they want to quit.
         * @pre: NONE
         * @post: The player will either quit the game, be taken to the scoreboard or start a game.
         */
        void GameMenu();
        /* The player will be asked to choose their difficulty for the game.
         * @pre: The player will have selected 1 in the Game Menu.
         * @post: The game will begin with the difficulty the player chose.
         */
        void DifficultyMenu();
        /* The player will be taken to the scoreboard where they can see their score.
         * @pre: The player will have selected 2 in the Game Menu.
         * @post: The player will be taken to a menu to see their score.
         */
        void Scoreboard();
        /* The player can choose to return to the menu after they have won or lost.
         * @pre: The player has won or lost the game.
         * @post: The player will either quit the game or return to the menu.
         */
        void ReturnToMenu();
        /* The game will begin with the player's guess and on the CPU's turn, it will get 5 chances to guess the number.
         * pre: The player will have selected 1 in the Difficulty Menu.
         * post: The player will begin the game on Easy Mode.
         */
        void EasyGame();
        /* The game will begin with the player's guess and on the CPU's turn, it will get 10 chances to guess the number.
         * pre: The player will have selected 2 in the Difficulty Menu.
         * post: The player will begin the game on Medium Mode.
         */
        void MediumGame();
        /* The game will begin with the player's guess and on the CPU's turn, it will get 20 chances to guess the number.
         * pre: The player will have selected 3 in the Difficulty Menu.
         * post: The player will begin the game on Hard Mode.
         */
        void HardGame();
        /* A random number will be generated between 1-100.
         * @pre: NONE
         * @post: A random number will be generated to guess.
         */
        void GenerateRandomNumber();

};

#endif //NUMBER_GUESSING_GAME_GUESSINGGAME_H
