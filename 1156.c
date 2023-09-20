#include<stdio.h>
int main()
{
       int s,i;
    float sum =0,j=1.00;
    for(i=1; i<=39; i+=2)
    {
        j=j*2;
        sum=sum+i/j;

    }

    printf("%.2f\n",sum);
    return 0;
}
