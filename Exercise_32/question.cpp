/*
Prompt for the difficulty level, and then start the game. The
computer picks a random numberin thatrange and prompts
the player to guess that number. Each time the player
guesses, the computer should give the player a hint as to
whether the number is too high or too low. The computer
should also keep track of the number of guesses. Once the
player guesses the correct number, the computer should
present the number of guesses and ask if the player would
like to play again.
Example Output
Let's play Guess the Number.
Pick a difficulty level (1, 2, or 3): 1
I have my number. What's your guess? 1
Too low. Guess again: 5
Too high. Guess again: 2
You got it in 3 guesses!
Play again? n
Goodbye!
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playgame( int difficulty)
{
    int gussesscount = 0;
    int userchoice;
    int numbertoguess;
    int range = 0;
    
    if(difficulty == 1)
    {
        range = 10;
    } else if(difficulty == 2)
    {
        range = 20;
    } else if(difficulty == 3)
    {
        range = 30;
    }
    
    numbertoguess = rand() % range + 1;
    cout << "I have my number between 1 and " << range << ". What's your guess? ";
    
    while(true)
    {
        cin >> userchoice;
        gussesscount++;
        
        if(userchoice < numbertoguess)
        {
            cout<<"Too low. Guess again";
        }
        else if(userchoice > numbertoguess)
        {
            cout<<"Too high . Guess again";
        }
        else 
        {
            cout << "You got it in " << gussesscount << " guesses!" << endl;
            break;
        }
    }
}


int main() {
    int difficulty;
    char playAgain;

  
    cout << "Let's play Guess the Number." << endl;

    do {
       
        cout << "Pick a difficulty level (1, 2, or 3): ";
        cin >> difficulty;

        
        while (difficulty < 1 || difficulty > 3) {
            cout << "Invalid choice. Please pick a difficulty level (1, 2, or 3): ";
            cin >> difficulty;
        }

        
        playgame(difficulty);

        
        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}