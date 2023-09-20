#include <stdio.h>

int main(void)
{
    int n,count=0;
    float ave=0.00,sum=0.00;
    while (1)
    {
        scanf("%d",&n);
        if (n<0)
        {
            break;
        }
        else
        {
            sum=sum+n;
            count++;

        }
    }
    ave= sum*1.00/count;
    printf("%.2f\n",ave);

    return 0;
}
