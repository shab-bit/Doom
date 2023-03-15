int botOP(int x, int DOOMcard, int playerbot[4][14])
{
    /*make array options*/
    if (playerbot[x][11])
    {
        for (int i = 10; i > 0; i--)
        {
            if (playerbot[x][i])
            {
                playerbot[0][12] = i;
                playerbot[x][i] = 0;
                playerbot[0][13] = x;
                playerbot[x][11] -= 1;
                i = 0;
            }
        }
    }
    else if (playerbot[DOOMcard][11])
    {
        for (int i = 10; i > 0; i--)
        {
            if (playerbot[DOOMcard][i])
            {
                playerbot[0][12] = i;
                playerbot[0][13] = DOOMcard;
                playerbot[DOOMcard][i] = 0;
                playerbot[DOOMcard][11] -= 1;
                i = 0;
            }
        }
    }
    else
    {
        if (playerbot[3][11])
        {
            for (int i = 0; i < 11; i++)
            {
                if (playerbot[3][i])
                {
                    playerbot[0][12] = i;
                    playerbot[0][13] = 3;
                    playerbot[3][i] = 0;
                    playerbot[3][11] -= 1;
                    i = 24;
                }
            }
        }
        else if (playerbot[2][11])
        {
            for (int i = 0; i < 11; i++)
            {
                if (playerbot[2][i])
                {
                    playerbot[0][12] = i;
                    playerbot[0][13] = 2;
                    playerbot[2][i] = 0;
                    playerbot[2][11] -= 1;
                    i = 24;
                }
            }
        }
        else if (playerbot[1][11])
        {
            for (int i = 0; i < 11; i++)
            {
                if (playerbot[1][i])
                {
                    playerbot[0][12] = i;
                    playerbot[0][13] = 1;
                    playerbot[1][i] = 0;
                    playerbot[1][11] -= 1;
                    i = 24;
                }
            }
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                if (playerbot[0][i])
                {
                    playerbot[0][12] = i;
                    playerbot[0][12] = 1;
                    playerbot[0][i] = 0;
                    playerbot[0][11] -= 1;
                    i = 24;
                }
            }
        }
    }
}