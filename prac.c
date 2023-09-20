#include<stdio.h>
int main()
{
    int n,i,sumev=0, sumod=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d is a even number.\n",i);
            sumev=sumev+i;
        }
        else
            printf("%d is a odd number.\n",i);
            sumod=sumod+i;
    }
    printf("sum of even number  = %d\n",sumev);
    printf("sum of even number  = %d\n",sumod);




    return 0;
}
