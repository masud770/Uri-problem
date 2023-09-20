#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int i;
    for(i=1; i<=a; i++)
    {
        scanf("%d",&b);
        if(b==0)
            printf("NULL\n",b);
        else if((b>0) && (b%2==0))
            printf("EVEN POSITIVE\n");
        else if(b<0 && b%2==0)
            printf("EVEN NEGATIVE\n");
        else if(b>0 && b%2!=0)
            printf("ODD POSITIVE\n");
        else
            printf("ODD NEGATIVE\n");

    }
    return 0;
}
