#include<stdio.h>
int main()
{
   long long int a,b;
   int i,sum=0;
    scanf("%lld %lld",&a,&b);
    for(i=a; i<=b; i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}
