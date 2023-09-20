#include<stdio.h>
int main()
{
    int n,i;
    double a,b,c,sum=0,average=0;
    scanf("%d",&n);
    for(i=0; i< n; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        sum = a*2+b*3+c*5;
        average= sum/(2+3+5);
        printf("%.1lf\n",average);

    }

    return 0;
}
