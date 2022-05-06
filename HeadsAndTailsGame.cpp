#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const char TAILS = 't';
const char HEADS = 'h';

char getCpuOption()
{
    srand((unsigned)time(0)); // This provides random generator option for C++ (Seeding) (Not reliable but it works most of the time) (uses time of opening program and uses of program to generate random numbers)

    int num;

    for (int index = 0; index < 3; index++)
    {
        num = (rand() % 2) + 1;

        if (num == 1)
            return 't';
        if (num == 2)
            return 'h';
    }
    return num;
}

char getUserInput()
{
    char input;
    cout << "\n(t) for Tails" << endl
         << "(h) for Heads" << endl;
    cout << "Input your choice: ";
    cin >> input;

    while (input != 't' && input != 'h')

        if (isupper(input))
        {
            cout << "                " << endl;
            cout << "Your input is uppercase(Only lowercase) Try again!" << endl;
            cout << "(t) for Tails" << endl
                 << "(h) for Heads" << endl;
            cout << "Input your choice: ";
            cin >> input;
        }
        else if (!isupper(input))
        {
            cout << "                " << endl;
            cout << "Please enter one of the following options only." << endl;
            cout << "(t) for Tails" << endl
                 << "(h) for Heads" << endl;
            cout << "Input your choice: ";
            cin >> input;
        }
        else
        {
            return input;
        }
    return input;
}
void seeWinner(const char userOption, const char cpuOption)
{
    if ((userOption == 't' && cpuOption == 't') || (userOption == 'h' && cpuOption == 'h'))
    {
        cout << "\nYou win!" << endl;
    }
    if ((userOption == 'h' && cpuOption == 't') || (userOption == 't' && cpuOption == 'h'))
    {
        cout << "\nYou Lost!" << endl;
    }
}

void showSelectedOption(char option)
{
    if (option == 't')
        cout << "Tails" << endl;
    if (option == 'h')
        cout << "Heads" << endl;
}

int main()
{
    char userInput;
    char cpuInput;

    cout << "                                       " << endl;
    cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t        Heads & Tails Game" << endl;
    cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    userInput = getUserInput();
    cout << "       " << endl
         << "Your choice: ";
    showSelectedOption(userInput);

    cpuInput = getCpuOption();
    cout << "Computer choice: ";
    showSelectedOption(cpuInput);

    seeWinner(userInput, cpuInput);

    int choice;
    int i;

    cout << "                               ";
    cout << "\nDo you wish to play again? (1 for yes or enter any key for no): ";
    cin >> choice;

    for (i = 0; choice != 10000000; i++)
    {

        if (choice == 1)
        {
            userInput = getUserInput();
            cout << "       " << endl
                 << "Your choice: ";
            showSelectedOption(userInput);

            cpuInput = getCpuOption();
            cout << "Computer choice: ";
            showSelectedOption(cpuInput);

            seeWinner(userInput, cpuInput);
            cout << "                               ";
            cout << "\nDo you wish to play again? (1 for yes or enter any key for no): ";
            cin >> choice;
        }
        else
        {
            printf("\nThank you for Playing!");
            printf("\n  Have a Great Day!");
            printf("\n                  ");
            return 0;
        }
    }
}

// bug
// todo
// ?
// !
// normal

// todo - 1. Make a new random generate from the cpu to choose better options and is more reliable eventually
// bug - 1. Doesn't read string input from user