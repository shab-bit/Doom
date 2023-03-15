int WHOwin(int number, int firstcard, int DOOMcard, int player1[4][14], int player2bot[4][14], int player3bot[4][14], int player4bot[4][14], int masg)
{
    int winer, ma;
    if (player1[0][13] == DOOMcard) /*DOOMcard winer finder 1*/
    {
        winer = 1;
        ma = player1[0][12];
        if (player2bot[0][13] == DOOMcard)
        {

            if (ma < player2bot[0][12])
            {
                ma = player2bot[0][12];
                winer = 2;
            }
        }
        if (player3bot[0][13] == DOOMcard)
        {
            if (ma < player3bot[0][12])
            {
                ma = player3bot[0][12];
                winer = 3;
            }
        }
        if (player4bot[0][13] == DOOMcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player2bot[0][13] == DOOMcard) /*DOOMcard winer finder 2*/
    {
        winer = 2;
        ma = player3bot[0][12];
        if (player3bot[0][13] == DOOMcard)
        {
            if (ma < player3bot[0][12])
            {
                ma = player3bot[0][12];
                winer = 3;
            }
        }
        if (player4bot[0][13] == DOOMcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player3bot[0][13] == DOOMcard) /*DOOMcard winer finder 3*/
    {
        winer = 3;
        ma = player4bot[0][12];
        if (player4bot[0][13] == DOOMcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player4bot[0][13] == DOOMcard) /*DOOMcard winer finder 4*/
    {
        winer = 4;
    }
    /*first card finder*/
    else if (player1[0][13] == firstcard) /*first card finder 1*/
    {
        winer = 1;
        ma = player1[0][12];
        if (player2bot[0][13] == firstcard)
        {
            if (ma < player2bot[0][12])
            {
                ma = player2bot[0][12];
                winer = 2;
            }
        }
        if (player3bot[0][13] == firstcard)
        {
            if (ma < player3bot[0][12])
            {
                ma = player3bot[0][12];
                winer = 3;
            }
        }
        if (player4bot[0][13] == firstcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player2bot[0][13] == firstcard) /*first card finder 2*/
    {
        winer = 2;
        ma = player2bot[0][12];
        if (player3bot[0][13] == firstcard)
        {
            if (ma < player3bot[0][12])
            {
                ma = player3bot[0][12];
                winer = 3;
            }
        }
        if (player4bot[0][13] == firstcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player3bot[0][13] == firstcard) /*first card finder 3*/
    {
        winer = 3;
        ma = player3bot[0][12];
        if (player4bot[0][13] == firstcard)
        {
            if (ma < player4bot[0][12])
            {
                winer = 4;
            }
        }
    }
    else if (player4bot[0][13] == firstcard) /*first card finder 4*/
    {
        winer = 4;
    }

    else if (1)
    {
        winer = 1;
        ma = player1[0][12];
        if (ma < player2bot[0][12])
        {
            ma = player2bot[0][12];
            winer = 2;
        }
        if (ma < player3bot[0][12])
        {
            ma = player3bot[0][12];
            winer = 3;
        }
        if (ma < player4bot[0][12])
        {
            ma = player4bot[0][12];
            winer = 4;
        }
    }
    return winer;
}