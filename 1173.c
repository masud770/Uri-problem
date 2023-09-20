#include<stdio.h>
int main()
{
     int n,i,j;
    scanf("%d",&n);
    for(i=0; i<11; i++,j*=2)
    {
        printf("N[%d] = %d\n",i,j);
    }
    return 0;
}
