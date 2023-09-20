#include<stdio.h>
int main()
{
    int N,hour,min,sec;
    scanf("%d",&N);
    hour=N/3600;
    N=N%3600;
    min=N/60;
    sec=N%60;
    printf("%d:%d:%d",hour,min,sec);
    return 0;
}
