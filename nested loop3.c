#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0; k<n; k++)
                count++;
        }
    }

    printf("n=%d  count=%d\n",n,count);

    return 0;
}
