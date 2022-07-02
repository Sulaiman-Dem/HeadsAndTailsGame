# Heads & Tails Game

## Pseudocode

### User Interface =

1. Start with showing whether they want to choose heads or tails
2. Then they can choose whether they want to play again or not
3.

### Code Interface =

##### Functions :

1. Something that checks user input (capitalisation, integers, strings) if not input correct ask to try again
2. (Declare constant variables)
3. have the program choose randomly between t = tails and h = heads
4.

##### Int main () :

1. Present what the program is mainly about
2. Ask the user to choose between t for tails and h for heads
3. Use checking function of cin else try again for user input
4. Then use function of randomly choosing heads and tails
5. After present user the if they won or lost the coin flip.
6. Ask if they want to play again if yes loop steps 2 - 6 else present goodbye message

### Issues =

1. I had issues finding a way of making it so that CPU randomly choosing heads or tails
   Solution = I figured out modulus provides whole numbers as an outcome so if I make it so that h = 2 and t = 1. It will work but I needed help from online to get srand((unsigned)time(0)) since I had no idea at the time to implement modulus into this program. This function works with timing of opening program and choses a random number from that time of opening. Its not the most reliable but it works most of the time
2. I had an issue where my while loop would only loop twice and it would automatically end after the second usage of the program if the user wanted to use the program again
   Solution = I created the if statements within the while loop and now it loops continuously until the user is finished with program
3. I had an issue with the getUserInput function because it wasn't reading letters and numbers as incorrect inputs and would duplicate the try again input multiple times
   Solution =
