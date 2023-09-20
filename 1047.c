#include<stdio.h>
int main()
{
    int a1,b1,a2,b2,sum,sum2;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    sum= a2-a1;
    if(sum<0)
    {
        sum = 24+(a2-a1);

    }
    sum2= b2-b1;
    if (sum2<0)
    {
        sum2 =60 +(b2-b1);
        sum--;
    }

    if((a1 == a2)&&(b1 ==b2))
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",sum,sum2);
        return 0;
}

