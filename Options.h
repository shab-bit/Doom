int options(int player1[4][14], int player2bot[4][14], int player3bot[4][14], int player4bot[4][14], int start, int number, int card[44], int cardSighn[4][12])
{
    int swap = number;
    for (int player = 0; player < 4; player++) /*product card for every player*/
    {
        sighnMaker(card, cardSighn, start, number); /*make the cards we want*/

        switch (player)
        {
        case 0:
            for (int sigh = 0; sigh < 4; sigh++)
            {
                for (int val = 0; val < 11; val++)
                {
                    player1[sigh][val] = (player1[sigh][val] + cardSighn[sigh][val]); /*add the new cards*/
                }
                player1[sigh][11] = (cardSighn[sigh][11]) + player1[sigh][11]; /*clear how many card of one kind we have*/
            }

            break;
        case 1:
            for (int sigh = 0; sigh < 4; sigh++)
            {
                for (int val = 0; val < 11; val++)
                {
                    player2bot[sigh][val] = (player2bot[sigh][val] + cardSighn[sigh][val]); /*add the new cards*/
                }
                player2bot[sigh][11] = (cardSighn[sigh][11]) + player2bot[sigh][11]; /*clear how many card of one kind we have*/
            }

            break;
        case 2:
            for (int sigh = 0; sigh < 4; sigh++)
            {
                for (int val = 0; val < 11; val++)
                {
                    player3bot[sigh][val] = (player3bot[sigh][val] + cardSighn[sigh][val]); /*add the new cards*/
                }
                player3bot[sigh][11] = (cardSighn[sigh][11]) + player3bot[sigh][11]; /*clear how many card of one kind we have*/
            }
            break;
        case 3:
            for (int sigh = 0; sigh < 4; sigh++)
            {
                for (int val = 0; val < 11; val++)
                {
                    player4bot[sigh][val] = (player4bot[sigh][val] + cardSighn[sigh][val]); /*add the new cards*/
                }
                player4bot[sigh][11] = (cardSighn[sigh][11]) + player4bot[sigh][11]; /*clear how many card of one kind we have*/
            }
            break;

        default:
            printf("EROR IN OPTIONS part %d ;", player); /*special sichowayshen*/
            break;
        }
        start += number; /*go forward in card*/
    }
}