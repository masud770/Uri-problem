#include<stdio.h>
int main()
{
    int s,j;
    float sum =0,i=1.00;
    for(j=1; j<=100; j++)
    {
        sum=sum+i/j;
    }

    printf("%.2f\n",sum);
    return 0;
}
