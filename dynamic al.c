#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d %d",&n,&c);
    int w[n+1], v[n+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    int prft[n+1][c+1];
    for(i=0; i<=n; i++)
    {
        prft[i][0] = 0;
    }
    for(j=1; j<=c; j++)
    {
        prft[0][j]= 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(w[i]>j)
                prft[i][j]= prft[i-1][j];
            else
            {
                if(v[i]+prft[i-1][j-w[i]] > prft[i-1][j])
                    prft[i][j] = v[i]+prft[i-1][j-w[i]];
                else
                    prft[i][j]= prft[i-1][j];
            }
        }
    }
    printf("%d",prft[n][c]);
    i=n;
    j=c;
    while(i > 0 && j>0)
    {
        if(prft[i][j]!= prft[i-1][j])
        {
            printf("\n%d item taken",i);
            j= j-w[i];
            i--;
        }
        else
            i--;

    }
    return 0;

}
















