int numberGiver(int numbr, int kindit, int player1[4][14])
{
    int vorodi;

    for (int edame = 1; edame;)
    {
        printf("\t\t\t\t\t\t\t\t"); /*make correct position*/
        scanf("%d", &vorodi);       /*give inpute*/
        if (vorodi < numbr)
        {
            if (vorodi > -1)
            {
                if ((kindit - 1))
                {
                    return vorodi; /*putout the choice*/
                }
                edame = 0;
            }
            else /*acknowaldge the answer*/
            {
                printf("\t\t\t\t\t\t!!! please enter a correct number !!!\n");
            }
        }
        else /*acknowaldge the answer*/
        {
            printf("\t\t\t\t\t\t!!! please enter a correct number !!!\n"); /*show what is the error*/
        }
    }

    if (kindit)
    {
        for (int yek = vorodi + 1; yek;) /*finder of numbers of chosed card*/
        {
            for (int avo = 0; avo < 4 && yek; avo++)
            {
                for (int dovo = 0; dovo < 11 && yek; dovo++)
                {
                    if (player1[avo][dovo])
                    {
                        yek--;
                        player1[0][12] = dovo; /*value*/
                        player1[0][13] = avo;  /*sighn*/
                        if (!yek)
                        {
                            player1[avo][dovo] = 0; /*disable the used card*/
                            player1[avo][11] -= 1;  /*reduce number of card */
                            printf("card is %d|%d --> %d", avo, dovo, player1[avo][dovo]);
                        }
                    }
                }
            }
        }
    }
}