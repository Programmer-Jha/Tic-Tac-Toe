#include <stdio.h>

// Initial board setup
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void printboard();
int checking();

// Created By:- Aniket Kumar Jha 

int main() {
    int player = 1, input, status = -1, count = 0;
    char mark;

    printf("\nHello Buddy, Welcome to!!!\n");
    printf("\n*************************************************\n");
    printf("\n                  Tic Tac Toe\n");
    printf("\n*************************************************\n");
    printf("\nBefore starting a game there are some set of Instructions:- \n");
    printf("1) 'X' represents Player 1.\n");
    printf("2) '0' represents Player 2.\n");
    printf("3) Player 1 will have the first chance.\n");
    printf("4) Player 2 will have the second chance.\n");
    printf("\nBelow is your Battle Ground!!!\n Let's Start the Match!!!\n\n");
    printboard();

    while (status == -1) {
        count++;
        player = (player % 2 == 0) ? 2 : 1;
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d, please enter the number where you want to mark:- ", player);
        scanf("%d", &input);

        // Check for valid input and if the position is not already marked
        if (input < 1 || input > 9 || board[input] == 'X' || board[input] == 'O') {
            printf("Invalid Input! Please enter a valid position.\n");
            count--;
            continue;
        }

        board[input] = mark;
        printboard();
        status = checking();

        if (status == 1) {
            printf("Player %d is the Winner!\n", player);
        } else if (count == 9) {
            printf("Oop's Match Is Draw\n");
            break;
        }

        player++;
    }

    return 0;
}

void printboard() {
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("     |     |     \n");
}

int checking() {
    if (board[1] == board[2] && board[1] == board[3])
        return 1;
    else if (board[4] == board[5] && board[4] == board[6])
        return 1;
    else if (board[7] == board[8] && board[7] == board[9])
        return 1;
    else if (board[1] == board[4] && board[1] == board[7])
        return 1;
    else if (board[2] == board[5] && board[2] == board[8])
        return 1;
    else if (board[3] == board[6] && board[3] == board[9])
        return 1;
    else if (board[1] == board[5] && board[1] == board[9])
        return 1;
    else if (board[3] == board[5] && board[3] == board[7])
        return 1;
    else
        return -1;
}