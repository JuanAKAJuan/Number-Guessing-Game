#include "GuessingGame.h"

void GuessingGame::GameMenu()
{
    GenerateRandomNumber();
    do
    {
        std::cout << "******WELCOME TO CSC GAMES!******" << std::endl;
        std::cout << "Guessing Game....press 1" << std::endl;
        std::cout << "Scoreboard.......press 2" << std::endl;
        std::cout << "Quit.............press 3" << std::endl;
        std::cin >> menuChoice;

        if(menuChoice == 1)
        {
            DifficultyMenu();
        }
        if(menuChoice == 2)
        {
            Scoreboard();
        }
        if(menuChoice == 3)
        {
            exit(0);
        }
    }
    while(menuChoice != 1 && menuChoice != 2 && menuChoice != 3);
}

void GuessingGame::Scoreboard()
{
    std::cout << "******SCOREBOARD******" << std::endl;
    std::cout << "Your Score: " << playerScore << std::endl;
    std::cout << "CPU Score: " << cpuScore << std::endl;
    ReturnToMenu();
}

void GuessingGame::DifficultyMenu()
{
    do
    {
        std::cout << "******DIFFICULTY******" << std::endl;
        std::cout << "Easy (5 Guesses)....press 1" << std::endl;
        std::cout << "Medium (10 Guesses).....press 2" << std::endl;
        std::cout << "Hard (20 Guesses)....press 3" << std::endl;
        std::cin >> difficultyChoice;

        if(difficultyChoice == 1)
        {
            EasyGame();
        }
        if(difficultyChoice == 2)
        {
            MediumGame();
        }
        if(difficultyChoice == 3)
        {
            HardGame();
        }
    }
    while(difficultyChoice != 1 && difficultyChoice != 2 && difficultyChoice != 3);
}

void GuessingGame::GenerateRandomNumber()
{
    srand(time(nullptr));
    randomNumber = 1+(rand() % 100);
}

// Gameplay loop works by allowing player to try to guess the number and if they get it wrong the
// EasyGame() function is called again in order to allow the player to make another guess.
// This is also true for MediumGame() and HardGame().
void GuessingGame::EasyGame()
{
    std::cout << "Pick a number between 1-100: ";
    std::cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        std::cout << "Too low :(" << std::endl;

        for(int i = 0; i < 5; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;

            if(cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if(cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        EasyGame();
    }
    if(numberGuessed > randomNumber)
    {
        std::cout << "Too high :(" << std::endl;

        for(int i = 0; i < 5; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if(cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        EasyGame();
    }
    if(numberGuessed == randomNumber)
    {
        std::cout << "You guessed the number and won!" << std::endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::MediumGame()
{
    std::cout << "Pick a number between 1-100: ";
    std::cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        std::cout << "Too low :(" << std::endl;

        for(int i = 0; i < 10; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;

            if (cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if (cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        MediumGame();
    }
    if(numberGuessed > randomNumber)
    {
        std::cout << "Too high :(" << std::endl;

        for(int i = 0; i < 10; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if(cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        MediumGame();
    }
    if(numberGuessed == randomNumber)
    {
        std::cout << "You guessed the number and won!" << std::endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::HardGame()
{
    std::cout << "Pick a number between 1-100: ";
    std::cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        std::cout << "Too low :(" << std::endl;

        for(int i = 0; i < 20; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;

            if(cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if(cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        HardGame();
    }
    if(numberGuessed > randomNumber)
    {
        std::cout << "Too high :(" << std::endl;

        for(int i = 0; i < 20; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            std::cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                std::cout << "....Incorrect" << std::endl;
            }
            else if(cpuGuess == randomNumber)
            {
                std::cout << "....Correct! You Lost The Game :(" << std::endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        HardGame();
    }
    if(numberGuessed == randomNumber)
    {
        std::cout << "You guessed the number and won!" << std::endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::ReturnToMenu()
{
    std::cout << "Would you like to return to the menu? Y/N" << std::endl;
    std::cin >> returnToMenu;

    returnToMenu = tolower(returnToMenu);

    if(returnToMenu == 'y')
    {
        GameMenu();
    }
    if(returnToMenu == 'n')
    {
        exit(0);
    }
}
