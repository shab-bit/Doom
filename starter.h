int starter(int vorod, int DOOMcard, int player1[4][14], int player2bot[4][14], int player3bot[4][14], int player4bot[4][14], int score[2][2])
{
    int vort = vorod, goal = -1;
    for (int playtime = 10; playtime;)
    {

        switch (vorod)
        {
        case 1:
            gameshow(score, 1, player1, player2bot, player3bot, player4bot, DOOMcard);
            numberGiver((player1[0][11] + player1[1][11] + player1[2][11] + player1[3][11]), 1, player1); /*player 1 choice*/
            if (goal == -1)
            {
                goal = player1[0][13];
            }
            break;
        case 2:
            if (goal == -1)
            {
                goal = maxof(player2bot);
            }
            botOP(goal, DOOMcard, player2bot); /*recognize bots options 2*/
            gameshow(score, 0, player1, player2bot, player3bot, player4bot, DOOMcard);
            printf("case 2 --> goale is %d\n", goal);
            getch();
            break;
        case 3:
            if (goal == -1)
            {
                goal = maxof(player3bot);
            }
            botOP(goal, DOOMcard, player3bot); /*recognize bots options 3*/
            gameshow(score, 0, player1, player2bot, player3bot, player4bot, DOOMcard);
            printf("case 3 --> goale is %d\n", goal);
            getch();
            break;
        case 4:
            if (goal == -1)
            {
                goal = maxof(player4bot);
            }
            botOP(goal, DOOMcard, player4bot); /*recognize bots options 4*/
            gameshow(score, 0, player1, player2bot, player3bot, player4bot, DOOMcard);
            getch();
            break;

        default:
            printf("ERORE IN STARTER\n");
            break;
        }
        vorod++;
        if (vorod > 4)
        {
            vorod = 1;
        }
        if (vort == vorod)
        {
            playtime = 0;
            return goal;
        }
    }
}