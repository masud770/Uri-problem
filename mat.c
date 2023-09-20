#include <stdio.h>

int main()
{
    int i, j, a, b;
    printf("Enter 1st & 2nd string size: ");
    scanf("%d %d", &a, &b);

    char s1[a], s2[b];
    printf("Input the String S1 and S2 are : ");
    scanf("%s %s", &s1, &s2);
    int LCS_table[a + 1][b + 1];

    for (i = 0; i <= a; i++)
    {
        for (j = 0; j <= b; j++)
        {
            LCS_table[i][j] = 0;
        }
    }

    for (i = 1; i <= a; i++)
        for (j = 1; j <= b; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            }
            else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1])
            {
                LCS_table[i][j] = LCS_table[i - 1][j];
            }
            else
            {
                LCS_table[i][j] = LCS_table[i][j - 1];
            }
        }
    int index = LCS_table[a][b];
    char LCS[index];
    i = a, j = b;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            LCS[index - 1] = s1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }
    printf("longest common subsequence :%s\n", LCS);
    return 0;
}
