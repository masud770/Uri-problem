#include<stdio.h>
int main()
{
    int a,b,x,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    int i;
    for(i = a; i <= b; i++)
    {
        if(i%13 != 0)

            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
