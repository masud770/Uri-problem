#include<stdio.h>
int main()
{
    double a,b,S,average;
    scanf("%lf%lf",&a,&b);
    S = a*b;
    average = S/12;
    printf("%.3lf\n",average);
    return 0;
}
