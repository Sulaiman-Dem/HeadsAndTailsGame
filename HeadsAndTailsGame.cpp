#include <iostream>
#include <limits> // for  limits numeric_limits<streamsize>::max
#include <string>

// A class for heads and tails game
class headsAndTails
{
public:
    // This function allows the randomness of the coin flip to happen with srand and uses modulus to indicate t = 1 and h = 2
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

    // This functions asks the user for their choice of heads and tails, which is indicated by "t" or "h"
    std::string getUserInput()
    {
        std::string userInput;
        std::cout << "\n(t) for Tails" << std::endl
                  << "(h) for Heads" << std::endl;
        std::cout << "Input your choice: ";
        std::cin >> userInput;

        while ((userInput != "t") && (userInput != "h"))
        {

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nERROR: Please input only the provided options below!" << std::endl;
            std::cout << "(t) for Tails" << std::endl
                      << "(h) for Heads" << std::endl;
            std::cout << "Input your choice: ";
            std::cin >> userInput;
        }

        return userInput;
    }

    // This function will determine the winner by comparing computer's choice and user's choice
    void seeResult(std::string userOption, char cpuOption)
    {
        if ((userOption == "t" && cpuOption == 't') || (userOption == "h" && cpuOption == 'h'))
        {
            std::cout << "\nYou Win!" << std::endl;
        }
        if ((userOption == "h" && cpuOption == 't') || (userOption == "t" && cpuOption == 'h'))
        {
            std::cout << "\nYou Lost!" << std::endl;
        }
    }

    // This function allows for the user to see their picked option
    void showSelectedOptionUser(std::string option)
    {
        if (option == "t")
            std::cout << "Tails" << std::endl;
        if (option == "h")
            std::cout << "Heads" << std::endl;
    }
    // This function allows for the user to see the computer's pick option
    void showSelectedOptionCPU(char option)
    {
        if (option == 't')
            std::cout << "Tails" << std::endl;
        if (option == 'h')
            std::cout << "Heads" << std::endl;
    }
};

// This function will allow the program to continuously loop until the user is finished using it
void userLoopDecision()
{
    std::string userDecision;
    std::string userInput;
    char cpuInput;

    class headsAndTails headsTails;

    std::cout << "\nDo you wish to play again? (1 for yes or 0 for no): ";
    std::cin >> userDecision;

    while ((userDecision != "1") && (userDecision != "0"))
    // User is forced to choose either 1 or 0
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nInvalid Input!";
        std::cout << "\nInput Choice here: ";
        std::cin >> userDecision;
    }

    if (userDecision == "1")
    {
        userInput = headsTails.getUserInput(); // The variable userInput will get a value from the function getUserInput
        std::cout << "\nYour choice: ";
        headsTails.showSelectedOptionUser(userInput); // This will present the user their chosen option

        cpuInput = headsTails.getCpuOption(); // The variable cpuInput will get a value from the function getCpuOption
        std::cout << "Computer choice: ";
        headsTails.showSelectedOptionCPU(cpuInput); // This will present the user the choice chosen by the computer

        headsTails.seeResult(userInput, cpuInput); // This will use both stored values within the variables to determine wether the user wins or loses

        // This will loop itself until user choose "0" as option
        userLoopDecision();
    }
    // This ends the program
    if (userDecision == "0")
    {
        std::cout << "\nThank you for Playing!";
        std::cout << "\n  Have a Great Day!";
        std::cout << "\n\t";
    }
}

int main()
{
    std::string userInput;
    char cpuInput;
    int userDecision;

    class headsAndTails headsTails;

    std::cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "\t\t        Heads & Tails Game" << std::endl;
    std::cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    userInput = headsTails.getUserInput(); // The variable userInput will get a value from the function getUserInput
    std::cout << "\nYour choice: ";
    headsTails.showSelectedOptionUser(userInput); // This will present the user their chosen option

    cpuInput = headsTails.getCpuOption(); // The variable cpuInput will get a value from the function getCpuOption
    std::cout << "Computer choice: ";
    headsTails.showSelectedOptionCPU(cpuInput); // This will present the user the choice chosen by the computer

    headsTails.seeResult(userInput, cpuInput); // This will use both stored values within the variables to determine wether the user wins or loses

    userLoopDecision();
}