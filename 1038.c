#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    double x,y;
    x=a;
    y=b;
    if(x==1)
        printf("Total: R$ %.2lf\n",(y*4.00));
    else if(x==2)
        printf("Total: R$ %.2lf\n",(y*4.50));
    else if(x==3)
        printf("Total: R$ %.2lf\n",(y*5.00));
    else if (x==4)
        printf("Total: R$ %.2lf\n",(y*2.00));
    else if(x==5)
        printf("Total: R$ %.2lf\n",(y*1.50));

    return 0;
}

