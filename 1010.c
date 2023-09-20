#include<stdio.h>
int main()
{
    int A,B,p,q;
    double C,r,sum;
    scanf("%d%d%lf%d%d%lf",&A,&B,&C,&p,&q,&r);
    sum =(B*C+q*r);
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}
