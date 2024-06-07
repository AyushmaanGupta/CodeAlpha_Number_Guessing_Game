#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 0 and 99
    int random_number = rand() % 100;
    cout << "Welcome to the number guessign game.\n";
    cout << "You are given three chances, choose wisely... \n";
    int guess;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nChoose the number between 0 to 99: ";
        cin >> guess;
        if (guess == random_number)
        {
            cout << "\nyou win";
            return 0;
        }
        else
        {
            if (i != 2)
            {
                if (guess < random_number)
                {
                    cout << "\nToo low, try again :( ";
                }
                else
                {
                    cout << "\nToo high, try again :( ";
                }
            }
            else
            {
                cout << "\nYou Lost :(";
            }
        }
    }
    cout << "\nThe number was: " << random_number;

    return 0;
}