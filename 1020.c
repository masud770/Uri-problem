#include<stdio.h>
int main()
{
    int N,year,month,day;
    scanf("%d",&N);
    year = N/365;
    N= N%365;
    month= N/30;
    N= N%30;
    day = N;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
    return 0;
}
