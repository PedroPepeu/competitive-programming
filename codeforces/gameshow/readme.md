game show

The Society of Bright Competitors (SBC) organizes television shows to its members (and currently it also broadcasts online!). SBC uses a a system of credits called sbecs, which can be used by players to participate in competitions or can be exchanged for prizes at the end of each season. SBC started a new type of game, and needs to do some simulations to avoid very large losses in the prize pool!

Ricardo is going to try the new game. He must bet 100

sbecs, which are transferred to his game balance. Then, a sequence of boxes is positioned. The game consists of rounds, and the maximum number of rounds is equal to the number of boxes. At each round, Ricardo decides whether to open the next box or to quit the game. If Ricardo quits, he gets the current balance of sbecs back. If Ricardo opens the next box, its content, which is a secret number, is added to his balance and the game continues. As the secret number in the box may be negative, Ricardo may end up at a loss! The game ends when Ricardo decides to quit or when the last box is opened.

SBC hired you to test the game. From the content of the boxes, you must decide what would be the largest possible balance that Ricardo could get.

Input

The first input line contains an integer 𝐶, 1≤𝐶≤100, which is the number of boxes in the game. After the first input line, there are 𝐶 more lines. Each of the 𝐶 lines contains the secret number of a box. The lines are in the same order of the boxes. The secret numbers are integers, 𝑉 , −1000≤𝑉≤1000.

Output

Output a line containing an integer which is the largest possible balance that Ricardo may get, given that sequence of boxes.
