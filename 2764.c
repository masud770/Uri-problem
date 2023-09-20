#include<stdio.h>
int main()
{
    int d=0,m=0,y;
    scanf("%d%d%d",&d,&m,&y);
    if(d<10 && m<10 && y<10){

    printf("0%d/0%d/%d\n",m,d,y);
    printf("%d/0%d/0%d\n",y,m,d);
    printf("0%d-0%d-%d\n",d,m,y);}
    return 0;

}
