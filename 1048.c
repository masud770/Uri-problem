#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if(0<= n && n<=400.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15%%\n%",(n+n*0.15),(n*0.15));
    }
    else if(n <=800.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n%",(n+n*0.12),(n*0.12));
    }
    else if(n <=1200.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n%",(n+n*0.10),(n*0.10));

    }
    else if(n <=2000.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n%",(n+n*0.07),(n*0.07));

    }
    else if(n>2000.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n%",(n+n*0.04),(n*0.04));

    }
    return 0;
}
