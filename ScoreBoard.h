int scoreBO(int start, int winers[4][1], int score[2][2], int masg, int player1[4][14], int player2bot[4][14], int player3bot[4][14], int player4bot[4][14], int DOOMcard)
{
    winers[start][0] += 1;
    switch (start)
    {
    case 1:
        score[0][0] += 1;
        masg = 2;
        break;
    case 2:
        score[0][1] += 1;
        masg = 3;
        break;
    case 3:
        score[0][0] += 1;
        masg = 2;
        break;
    case 4:
        score[0][1] += 1;
        masg = 3;
        break;

    default:
        printf("EROR IN SCORE BOARD !!!");
        break;
    }
    gameshow(score, masg, player1, player2bot, player3bot, player4bot, DOOMcard);
    getch();
}