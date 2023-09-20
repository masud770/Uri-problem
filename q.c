#include<stdio.h>

int main()
{
    long long int a,n,sum=0;
    scanf("%lld %lld",&a,&n);

    sum=(n*(2*a+(n-1)))/2;

    printf("%d\n",sum);




    return 0;
}
