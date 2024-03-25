#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char BoxNumber[] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int WinnerCheck();
void Grid();
// main code
int main()
{
    int user = 1, i, choice;

    char mark;
    do
    {
        Grid();
        user = (user % 2) ? 1 : 2;

        printf("user %d, please enter a Number:  ", user);
        scanf("%d", &choice);

        mark = (user == 1) ? 'X' : 'O';

        if (choice == 1 && BoxNumber[1] == '1')
            BoxNumber[1] = mark;

        else if (choice == 2 && BoxNumber[2] == '2')
            BoxNumber[2] = mark;

        else if (choice == 3 && BoxNumber[3] == '3')
            BoxNumber[3] = mark;

        else if (choice == 4 && BoxNumber[4] == '4')
            BoxNumber[4] = mark;

        else if (choice == 5 && BoxNumber[5] == '5')
            BoxNumber[5] = mark;

        else if (choice == 6 && BoxNumber[6] == '6')
            BoxNumber[6] = mark;

        else if (choice == 7 && BoxNumber[7] == '7')
            BoxNumber[7] = mark;

        else if (choice == 8 && BoxNumber[8] == '8')
            BoxNumber[8] = mark;

        else if (choice == 9 && BoxNumber[9] == '9')
            BoxNumber[9] = mark;

        else
        {
            printf("Invalid move ");

            user--;
            getch();
        }
        i = WinnerCheck();

        user++;
    }while (i ==  - 1);

    Grid();

    if (i == 1)
        printf("==>Looks like we have a winner... <==\n==>\aUser %d You are the winner, Congratulations! <==  \n", --user);

    else
        printf("==>\aGame draw <==");

    getch();

    return 0;
}
// code for checking who has won the game
int WinnerCheck()
{
    if (BoxNumber[1] == BoxNumber[2] && BoxNumber[2] == BoxNumber[3])
        return 1;

    else if (BoxNumber[4] == BoxNumber[5] && BoxNumber[5] == BoxNumber[6])
        return 1;

    else if (BoxNumber[7] == BoxNumber[8] && BoxNumber[8] == BoxNumber[9])
        return 1;

    else if (BoxNumber[1] == BoxNumber[4] && BoxNumber[4] == BoxNumber[7])
        return 1;

    else if (BoxNumber[2] == BoxNumber[5] && BoxNumber[5] == BoxNumber[8])
        return 1;

    else if (BoxNumber[3] == BoxNumber[6] && BoxNumber[6] == BoxNumber[9])
        return 1;

    else if (BoxNumber[1] == BoxNumber[5] && BoxNumber[5] == BoxNumber[9]
             )
        return 1;

    else if (BoxNumber[3] == BoxNumber[5] && BoxNumber[5] == BoxNumber[7])
        return 1;

    else if (BoxNumber[1] != '1' && BoxNumber[2] != '2' && BoxNumber[3] != '3' &&
        BoxNumber[4] != '4' && BoxNumber[5] != '5' && BoxNumber[6] != '6' && BoxNumber[7]
        != '7' && BoxNumber[8]
         != '8' && BoxNumber[9] != '9')

        return 0;
    else
        return  - 1;
}

// code for drawing Grid


void Grid()
{
    system("cls");
    printf("\n\n\n Welcome to Naughts and Crosses! \n\n\n");

    printf("User 1 is Crosses (X)  -  User 2 is Naughts (O)\n\n\n");


    printf("___________________\n");
    printf("|     |     |     |\n");
    printf("|  %c  |  %c  |  %c  |\n", BoxNumber[1], BoxNumber[2], BoxNumber[3]);

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  %c  |  %c  |  %c  |\n", BoxNumber[4], BoxNumber[5], BoxNumber[6]);

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  %c  |  %c  |  %c  |\n", BoxNumber[7], BoxNumber[8], BoxNumber[9]);

    printf("|_____|_____|_____|\n\n\n");
}


