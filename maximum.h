int maxof(int array[4][14])
{
    int maxi = 0, dosighn = 0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 10; i > -1; i--)
        {
            if (array[j][i])
            {
                if (i > maxi)
                {
                    maxi = i;
                    dosighn = j;
                }
            }
        }
    }
    return dosighn;
}