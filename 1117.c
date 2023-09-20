#include<stdio.h>
int main()
{
    double n,i, sum=0;
    while(1)
    {
        if(i==2)
        {
            break;
        }
        scanf("%lf",&n);
        if(n>=0 && n<=10)
        {
            sum=sum+n;
            i++;
        }
        else
            printf("nota invalida\n");
    }

    printf("media = %.2lf\n",sum/2.00);

    return 0;
}

