#include<stdio.h>
int main()
{
    int i,n,b=1;
    scanf("%d",&n);
    for(i=n; i>0; --i)
    {

        b=b*i;
    }
    printf("%d\n",b);
    return 0;
}
