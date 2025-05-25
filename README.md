This C++ program is a simple number guessing game. It starts by greeting the player, asking for their name, and checking if they want to play. If the player agrees, the program randomly picks a number between 1 and 100. The player then tries to guess the number, and the program gives hints like "too high" or "too low" after each guess. Once the correct number is guessed, it congratulates the player and shows how many attempts it took. If the player doesn't want to play or enters something invalid, it shows the appropriate message.
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
