#include "GuessingGame.h"

void GuessingGame::GameMenu()
{
    GenerateRandomNumber();
    do
    {
        cout << "******WELCOME TO CSC GAMES!******" << endl;
        cout << "Guessing Game....press 1" << endl;
        cout << "Scoreboard.......press 2" << endl;
        cout << "Quit.............press 3" << endl;
        cin >> menuChoice;

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
    cout << "******SCOREBOARD******" << endl;
    cout << "Your Score: " << playerScore << endl;
    cout << "CPU Score: " << cpuScore << endl;
    ReturnToMenu();
}

void GuessingGame::DifficultyMenu()
{
    do
    {
        cout << "******DIFFICULTY******" << endl;
        cout << "Easy (5 Guesses)....press 1" << endl;
        cout << "Medium (10 Guesses).....press 2" << endl;
        cout << "Hard (20 Guesses)....press 3" << endl;
        cin >> difficultyChoice;

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
    //cout << randomNumber << endl;
}

void GuessingGame::EasyGame()
{
    cout << "Pick a number between 1-100: ";
    cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        cout << "Too low :(" << endl;

        for(int i = 0; i < 5; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;

            if(cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if(cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        EasyGame();
    }
    if(numberGuessed > randomNumber)
    {
        cout << "Too high :(" << endl;

        for(int i = 0; i < 5; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if(cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        EasyGame();
    }
    if(numberGuessed == randomNumber)
    {
        cout << "You guessed the number and won!" << endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::MediumGame()
{
    cout << "Pick a number between 1-100: ";
    cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        cout << "Too low :(" << endl;

        for(int i = 0; i < 10; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;

            if (cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if (cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        MediumGame();
    }
    if(numberGuessed > randomNumber)
    {
        cout << "Too high :(" << endl;

        for(int i = 0; i < 10; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if(cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        MediumGame();
    }
    if(numberGuessed == randomNumber)
    {
        cout << "You guessed the number and won!" << endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::HardGame()
{
    cout << "Pick a number between 1-100: ";
    cin >> numberGuessed;

    if(numberGuessed < randomNumber)
    {
        cout << "Too low :(" << endl;

        for(int i = 0; i < 20; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;

            if(cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if(cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        HardGame();
    }
    if(numberGuessed > randomNumber)
    {
        cout << "Too high :(" << endl;

        for(int i = 0; i < 20; i++)
        {
            cpuGuess = 1 + (rand() % 100);
            cout << "CPU Guess: " << cpuGuess;
            if(cpuGuess != randomNumber)
            {
                cout << "....Incorrect" << endl;
            }
            else if(cpuGuess == randomNumber)
            {
                cout << "....Correct! You Lost The Game :(" << endl;
                cpuScore++;
                ReturnToMenu();
                break;
            }
        }
        HardGame();
    }
    if(numberGuessed == randomNumber)
    {
        cout << "You guessed the number and won!" << endl;
        playerScore++;
        ReturnToMenu();
    }
}

void GuessingGame::ReturnToMenu()
{
    cout << "Would you like to return to the menu? Y/N" << endl;
    cin >> returnToMenu;

    if(returnToMenu == 'Y' || returnToMenu == 'y')
    {
        GameMenu();
    }
    if(returnToMenu == 'N' || returnToMenu == 'n')
    {
        exit(0);
    }
}
