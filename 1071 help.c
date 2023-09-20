#include<stdio.h>
int main()
{
    int a,b,x,y,sum=0;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;

    }
    int i;
    for(i=(x+1); i<y; i++)
    {
        if(i%2==1 || i%2==-1)
        {
            sum +=i;
        }
    }


    printf("%d\n",sum);
    return 0;
}
