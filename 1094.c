#include<stdio.h>
int main()
{
    int n,i,a,s1=0,s2=0,s=0,sum=0;

    double s1a=0,s2a=0,sa=0;
    char b;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %c",&a,&b);
        if('C'==b)
        {
            s=s+a;
        }
        if('R'==b)
        {
            s1=s1+a;
        }
        if('S'==b)
        {
            s2=s2+a;
        }



    }
    sum=s+s1+s2;
    sa=(s/(sum*1.00))*100.00;
    s1a=(s1/(sum*1.00))*100.00;
    s2a=(s2/(sum*1.00))*100.00;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",s);
    printf("Total de ratos: %d\n",s1);
    printf("Total de sapos: %d\n",s2);
    printf("Percentual de coelhos: %.2lf %%\n",sa);
    printf("Percentual de ratos: %.2lf %%\n",s1a);
    printf("Percentual de sapos: %.2lf %%\n",s2a);


    return 0;
}
