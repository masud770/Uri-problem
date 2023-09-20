#include<stdio.h>
int main()
{
    long long int a,b,d,sum=0;
    //float f;
    scanf("%lld %lld",&a,&b);
    d=(b-a)+1;
    //f=d/2;
    sum=(a+b)*((float)d/2);
    printf("%lld\n",sum);
    return 0;
}
