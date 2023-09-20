#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,temp;
    scanf("%d%d%d",&p,&q,&r);
    a=p;
    b=q;
    c=r;
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if(b>c)
    {
        temp = b;
        b = c;
        c=temp;
    }
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n \n%d\n%d\n%d\n",a,b,c,p,q,r);
    return 0;

}
