#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secretnumber = rand() % 100 +1;
    int guess;
    cout << "guess a number between 1 and 100: \n";
    do {
        cout << "enter your guess: ";
        cin >> guess;
        if (guess > secretnumber)
        cout << "too high! \n";
        else if (guess < secretnumber)
        cout << "too low! \n";
        else 
        cout << "congratulations! you guessed it right. \n ";

    }
    while (guess != secretnumber);
    return 0;

}