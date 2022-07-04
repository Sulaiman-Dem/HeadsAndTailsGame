# Heads & Tails Game

## Pseudocode

### User Interface =

1. The user will choice between heads and tails
2. The user will chose whether they want to play again or not

### Code Interface =

##### Functions :

1. A class (headsAndTails) which has global variables that are used throughout the class
2. In class (headsAndTails) this function allows the randomness of the coin flip to happen with srand and uses modulus to indicate t = 1 and h = 2
3. In class (headsAndTails) this functions asks the user for their choice of heads and tails, which is indicated by "t" or "h"
4. In class (headsAndTails) this function will determine the winner by comparing computer's choice and user's choice
5. In class (headsAndTails) this function allows for the user to see their picked option and the computer's pick option as well
6. This function will allow the program to continuously loop until the user is finished using it

##### Int main () :

0. A description/title of the program
1. Declare needed variables
2. Use the function that ask the user for this choice of heads or tails
3. Show the choice of the user and present use function of computer to get a choice of heads and tails and show the user the choice of the computer
4. Present the user the results of the coin flip
5. Ask user if they want to use program and or they can end it there

### Issues =

1. I had issues finding a way of making it so that CPU randomly choosing heads or tails
   Solution = I figured out modulus provides whole numbers as an outcome so if I make it so that h = 2 and t = 1. It will work but I needed help from online to get srand((unsigned)time(0)) since I had no idea at the time to implement modulus into this program. This function works with timing of opening program and choses a random number from that time of opening. Its not the most reliable but it works most of the time
2. I had an issue where my while loop would only loop twice and it would automatically end after the second usage of the program if the user wanted to use the program again
   Solution = I created the if statements within the while loop and now it loops continuously until the user is finished with program
3. I had an issue with the getUserInput function because it would duplicate the try again input multiple times
   Solution = I was missing std::cin.clear(); and std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'), which are two lines of code which clears the stored cin value the user provided and ignores new line characters
4. After implementing these two lines of code a new problem happened when the user would input the incorrect option it would give the try again prompt. Then, the user inputs the correct input into the program, it still sees it as wrong. However, if the user were to input the correct input from the beginning it would read it as correct
   Solution = In the while loop there wasn't a cin command line to take in the userInput to evaluate if its correct or not 
