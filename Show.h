int gameshow(int score[2][2], int masg, int player1[4][14], int player2bot[4][14], int player3bot[4][14], int player4bot[4][14], int DOOMcard)
{
    system("cls"); /*clear the screan*/
    int neveshte, bar;
    char sighn = 'A';
    switch (player3bot[0][13]) /*realize sighn of player*/
    {
    case 0:
        sighn = 'A';
        break;
    case 1:
        sighn = 'B';
        break;
    case 2:
        sighn = 'C';
        break;
    case 3:
        sighn = 'D';
        break;

    default: /*undifined*/
        sighn = '?';
        break;
    }

    printf("\t\t\t\t\t\t\t bazikon A2 \t\t\t\t\t\t\t teem  A = %d \n ------------------------------------------------------------%c%d----------------------------------------------------------\n", score[0][0], sighn, player3bot[0][12] + 1);
    for (int j = 0; j < 28; j++) /*make boared of game*/
    {
        neveshte = 0;

        printf("|");
        switch (player2bot[0][13]) /*realize sighn of player*/
        {
        case 0:
            sighn = 'A';
            break;
        case 1:
            sighn = 'B';
            break;
        case 2:
            sighn = 'C';
            break;
        case 3:
            sighn = 'D';
            break;

        default:
            sighn = '?';
            break;
        }
        if (j == 14)
        {
            printf("bazikon B2 --> %c%d", sighn, player2bot[0][12] + 1);
            neveshte += 34;
        }
        for (neveshte; neveshte < 120; neveshte++)
        {
            printf(" ");
        }
        switch (player4bot[0][13]) /*realize sighn of player*/
        {
        case 0:
            sighn = 'A';
            break;
        case 1:
            sighn = 'B';
            break;
        case 2:
            sighn = 'C';
            break;
        case 3:
            sighn = 'D';
            break;

        default:
            sighn = '?';
            break;
        }
        if (j == 14)
        {
            printf("%c%d <-- bazikon B1", sighn, player4bot[0][12] + 1);
        }
        printf("|\n");
    }
    switch (DOOMcard) /*realize sighn DOOM*/
    {
    case 0:
        sighn = 'A';
        break;
    case 1:
        sighn = 'B';
        break;
    case 2:
        sighn = 'C';
        break;
    case 3:
        sighn = 'D';
        break;
    default:
        sighn = '?';
        break;
    }
    printf(" ------------------------------------------------------DOOMCARD IS %c-----------------------------------------------------\n\t\t\t\t\t\t\t bazikon A1 \t\t\t\t\t\t\t teem  B = %d \n ", sighn, score[0][1]);
    switch (player1[0][13]) /*realize sighn of player*/
    {
    case 0:
        sighn = 'A';
        break;
    case 1:
        sighn = 'B';
        break;
    case 2:
        sighn = 'C';
        break;
    case 3:
        sighn = 'D';
        break;

    default:
        sighn = '?';
        break;
    }
    printf("\n\t\t\t\t\t\t\t YOUR CARD IS %c%d\n", sighn, player1[0][12] + 1);
    printf("\t\t\t\t");

    sighn = 'A';
    for (int z = 0; z < player1[0][11]; z++) /*show sighn of cards a*/
    {
        printf("|  %c  ", sighn);
    }
    sighn = 'B';
    for (int z = 0; z < player1[1][11]; z++) /*show sighn of cards b*/
    {
        printf("|  %c  ", sighn);
    }
    sighn = 'C';
    for (int z = 0; z < player1[2][11]; z++) /*show sighn of cards c*/
    {
        printf("|  %c  ", sighn);
    }
    sighn = 'D';
    for (int z = 0; z < player1[3][11]; z++) /*show sighn of cards d*/
    {
        printf("|  %c  ", sighn);
    }

    /**/

    printf("|\n\t\t\t\t");
    for (int z = 0; z < 4; z++)
    {
        for (int nu = 0; nu < 11; nu++)
        {
            if (player1[z][nu])
            {
                if (nu < 9)
                {
                    printf("|  %d  ", nu + 1);
                }
                else
                {
                    printf("| %d  ", nu + 1);
                }
            }
        }
    }
    printf("|\n\t\t");
    for (int i = 0; i < 90; i++)
    {
        printf("-");
    }
    printf("\n");

    printf("\t\t\t\t|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  |\n\n"); /*keys*/

    /**/

    switch (masg) /*massage yo want to show*/
    {

    case 0:
        printf("\t\t\t\t\t\t\t!!! NEXT PLAYER (PRESS A KEY) !!!");
        break;

    case 1:
        printf("\t\t\t\t\t\t\t!!! CHOSE YOUR CARD !!!");
        break;

    case 2:
        printf("\t\t\t\t\t\t\t!!! TEEM A (YOU) WON :) (PRESS A KEY) !!!");
        break;

    case 3:
        printf("\t\t\t\t\t!!! TEEM B (BOTS) WON ; (YOU LOSE) :( (PRESS A KEY) !!!");
        break;

    case 4:
        printf("\t\t\t!!! TEEM B (BOTS) --> %d !!! \n\t\t\t !!! TEEM A (YOU)  --> %d !!!", score[0][0], score[0][1]);
        break;

    case 5:
        printf("\t\t\t\t\t\t!!! IT IS OVER (PRESS A KEY FOR SEEN WINER) !!!");
        break;
    case 6:
        printf("\t\t\t\t\t\t!!! CHOSE THE DOOM CARD !!!\n\t\t\t\t--> please enter a number (A = 0 ,B = 1 ,C = 2,D = 3) <--");
        break;

    default:
        printf("\t\t\t!!! EROR |--| chose a real card (your number is invalid) |--| EROR !!!");
        break;
    }
    printf("\n\n");
}