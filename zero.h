int zeroarr(int cardSighn[][12], int player1[][14], int player2bot[][14], int player3bot[][14], int player4bot[][14], int winers[4][1])
{
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 14; j++)
        { /*make all inputs zero*/
            cardSighn[i][j] = 0;
            player1[i][j] = 0;
            player2bot[i][j] = 0;
            player3bot[i][j] = 0;
            player4bot[i][j] = 0;
            winers[i][0] = 5;
        } /*ready for use*/
    }
}