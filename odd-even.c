#include<stdio.h>
int main()
{
    int i,n,even[1010];
    for(i = 0; i < 101; i++)
    {
        even[i] = 0;
    }
    for(i=0; i<101; i+=2)
    {
        even[i]= 1;
    }
    scanf("%d",&n);

    if(even[n])
    {
        printf("%d is even number.\n",n);
    }
    else
    {
        printf("%d is a odd number.",n);

    }



    return 0;
}
