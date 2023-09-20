#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int x,y;
        float sum;
        scanf("%d%d",&x,&y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            sum =x*(1.00)/y*(1.00);
            printf("%.1f\n",sum);
        }
    }

    return 0;

}
