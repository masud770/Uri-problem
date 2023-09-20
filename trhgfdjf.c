#include<stdio.h>
int main()
{
    int x,y,z;
    double N;
    scanf("%lf",&N);
    x=(N/100.00);
    printf("%d nota(s) de R$ 100.00\n",x);
    x=N-(x*100);
    printf("%d nota(s) de R$ 50.00\n",(x/50));
    x=x%50;
    printf("%d nata(s) de R$ 20.00\n",x/20);
    x=x%20;
    printf("%d nata(s) de R$ 10.00\n",x/10);
    x=x%10;
    printf("%d nata(s) de R$ 5.00\n",x/5);
    x=x%5;
    printf("%d nata(s) de R$ 2.00\n",x/2);
    printf("MOEDAS\n");
    x=x%2;
    printf("%d nata(s) de R$ 1.00\n",x/1);
    x=x%1;
    printf("%d nata(s) de R$ 0.50\n",x/0.50);


    return 0;

}

