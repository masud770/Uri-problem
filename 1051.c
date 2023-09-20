#include<stdio.h>
int main()
{
    double n,sum,sum1,sum2,sum3;
    scanf("%lf",&n);
    if(n<2000.00)
    {
        printf("Isento\n");
    }

    else if(2000.00 < n && n <=3000.00 )
    {
        sum = ((n-2000.00)*0.08);
        printf("R$ %.2lf\n",sum);
    }
    else if(3000.01 <=n && n <= 4500.00)
    {
        sum=1000*0.08;
        sum1=n-3000;
        printf("%.2lf",(sum1*0.18)+sum);
    }
    else
    {
        sum=(1000.00*0.08);
        sum1=(1500.00*0.18);
        sum3=((n-4500)*0.28);
        sum2=(sum+sum1+sum3);
        printf("R$ %.2lf\n",sum2);
    }
    return 0;
}
