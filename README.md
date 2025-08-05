# 🎮 Tic Tac Toe (C Language)

The **Tic Tac Toe Game** is a simple console-based two-player game implemented in **C language**. It allows two players to play the classic game in turns on a 3×3 board using `X` and `O` symbols. The game continues until there is a winner or the match ends in a draw.

---

## 👨‍💻 Author
**Aniket Kumar Jha**  
Project: **Tic Tac Toe** in C

---

## 📌 Game Rules & Instructions

- The game is played between **two players**.
- **Player 1** uses symbol **X**, and **Player 2** uses symbol **O**.
- Players take turns to place their mark in an empty cell (1-9).
- The player who places three of their marks in a **horizontal, vertical, or diagonal** row wins.
- If all 9 cells are filled and no player has won, the match is declared a **draw**.

---

## 🧠 Features

- Interactive command-line interface.
- Input validation for already filled or out-of-range positions.
- Displays board after every move.
- Detects winner or draw automatically.

---

## 🛠️ Tech Stack

- **Language:** C
- **Compiler:** GCC / Turbo C / Code::Blocks / Dev C++
- **Libraries Used:** `stdio.h`

---

## 🚀 How to Run

1. **Clone the repository** or copy the `.c` file to your system.

2. **Compile the code:**
   ```bash
   gcc Tic_Tac_Toe.c -o tictactoe
3. Play! Follow on-screen instructions to enter your moves.

## Sample Output

Hello Buddy, Welcome to!!!
*************************************************
                  Tic Tac Toe
*************************************************
Before starting a game there are some set of Instructions:-
1) 'X' represents Player 1.
2) '0' represents Player 2.
3) Player 1 will have the first chance.
4) Player 2 will have the second chance.

Below is your Battle Ground!!!
Let's Start the Match!!!

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     

Player 1, please enter the number where you want to mark: 5
...
Player 1 is the Winner!

## 📌 Future Enhancements

Add single-player mode with basic AI.
GUI version using C graphics libraries or other frameworks.
Track player scores or match history.

Made with 💡, 💻, and lots of ⚡ by Aniket Kumar Jha