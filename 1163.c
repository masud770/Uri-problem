#include<stdio.h>

int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        x= 24+(a-b);

    }
    else if(a>b)
    {
        x= 24-a+b;
    }
    else
    {
        x= b-a;
    }

    printf("O JOGO DUROU %d HORA(S)/n",x);




    return 0;
}
