int sighnMaker(int card[44], int cardSighn[4][12], int start, int number)
{
    int i = 0, j = 0;
    for (int av = 0; av < 4; av++)
    {
        for (int doo = 0; doo < 12; doo++)
        {
            cardSighn[av][doo] = 0;/*make array zero for have just new cards*/
        }
    }
    for (int har = start + 3; har < number + start + 3; har++)
    {/*recognize the sighn and valu of every number to cards */
        i = card[har] / 11;/*sighn*/
        j = card[har] % 11;/*value*/
        cardSighn[i][j] = 1;
        cardSighn[i][11] += 1;/*number of products*/
    }
}