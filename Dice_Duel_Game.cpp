#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // L,M,H Constants
    const char LOW = 'L';
    const char MID = 'M';
    const char HIGH = 'H';

    // Users guess
    char guess;

    // Running totals
    int CPUwins = 0;
    int userWins = 0;

    // Results
    string result;
    char LMD;

    // While loop
    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {

        // Get the dice roll
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sumOfDice = dice1 + dice2;

        // LMH
        if (sumOfDice <= 6) {
            LMD = LOW;
        } else if (sumOfDice == 7) {
            LMD = MID;
        } else {
            LMD = HIGH;
        }

        // Output Part 1
        cout << "High-Low Dice Duel!" << endl;
        cout << "Enter your guess (L=Low, M=Mid, H=High): ";
        cin >> guess;
        cout << "Computer rolled: " << dice1 << " and " << dice2 << " (sum=" << sumOfDice << ") -> " << LMD;
        cout << endl;

        // Check Guess
        if (toupper(guess) == LMD) {
            cout << "Result: You win!" << endl;
            userWins++;
        } else {
            cout << "Result: Computer wins!" << endl;
            CPUwins++;
        }

        // Output Part 2
        cout << "Score - You: " << userWins << " Computer: " << CPUwins << endl;
        cout << "Play again (Y/N)? ";
        cin >> playAgain;
        cout << endl;

    }

    // Final Results
    cout << "Final Results" << endl;
    cout << "You won: " << userWins << endl;
    cout << "Computer won: " << CPUwins << endl;
    cout << "Total rounds: " << userWins + CPUwins << endl;
    cout << "Goodbye!" << endl;
    cout << endl;



    
    return 0;
}
