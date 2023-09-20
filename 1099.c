#include <stdio.h>
int main()
{
    int n,x,y,i,j,sum=0;
    printf("Input the value of n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("Input two values x &y : ");
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            sum=x-y;
        }
        else if(x<y)
        {
            for(j=x+1,sum=0;j<y;j++)
            {
                if(j%2==1)
                    sum=sum +j;
            }
        }
        else
        {
            for(j=y+1,sum=0;j<x;j++)
            {
                if(j%2==1)
                    sum=sum+j;
            }


        }
        printf("%d\n",sum);
    }
    return 0;
}
