#include<stdio.h>
int main()
{
    int n;
    int i,sum=0;

    for(i=1; i<=5; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            sum = sum+1;
        }

    }
    printf("%d valores pares\n",sum);
    return 0;
}
