This C++ program is a number guessing game. It asks for the player's name, checks if they want to play, then lets them guess a random number between 1 and 100, giving hints until they guess correctly.
------------------------------------------------------------------------------------------------------------------
This C++ program is a simple interactive "Guess the Number" game that includes basic input/output, random number generation, and condition handling.

**Features:**
• **Welcomes the player and asks for their name.**
• Asks the user if they want to play a game.
  • If the user says "Yes", the game begins.
  • If the user says "No", a polite exit message is shown.
  • If the input is neither "Yes" nor "No", it displays an "Invalid selection" message.

• **If the game begins:**
  • The program randomly selects a number between 1 and 100.
  • The player must guess the number.
  • After each guess, the program tells the player if the guess was too high or too low.
  • When the correct number is guessed, the program congratulates the player and displays the number of attempts taken.

**Technical Highlights:**
  • Uses the <cstdlib> and <ctime> libraries to generate a pseudo-random number.
  • Makes use of loops (while), conditionals (if, else if, else), and string handling.
  • Demonstrates basic console I/O using cin, cout, getline, and formatting with setw.
  • Uses system("pause") and system("cls") to control the console experience (Note: This is platform-specific to Windows).
