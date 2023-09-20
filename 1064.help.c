#include<stdio.h>
int main()
{
    int a,i,sum=0;
    double average = 0, n=0;
    for(i=1; i<=10; i++)
    {
        scanf("%d",&a);
        sum  += a;
        n++;

    }

    printf(" sum= %d\n",sum);
    average=(sum/n);
    printf(" n= %.0lf\n",n);
    printf(" average = %.3lf",average);

    return 0;


}
