#include <stdio.h>
int main()
{
    int a,b,c,sum;
    while(1)
    {
        sum=0;
        scanf("%d%d", &a, &b);
        if(a<=0 || b<=0)
            break;
        else
        {

            if(a<b)
            {
                for(c=a; c<=b; c++)
                {
                    printf("%d ",c);
                    sum+=c;
                }
                printf("Sum=%d\n",sum);
            }
            else if(a>b)
            {
                for(c=b; c<=a; c++)
                {
                    printf("%d ",c);
                    sum+=c;
                }
                printf("Sum=%d\n",sum);
            }
        }
    }
    return 0;
}
