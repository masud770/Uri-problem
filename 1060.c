#include<stdio.h>
int main()
{
    double n;
    int i,sum=0;

    for(i=1; i<=6; i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            sum = sum+1;
        }

    }
    printf("%d valores positivos\n",sum);
    return 0;
}
