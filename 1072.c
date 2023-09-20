#include<stdio.h>
int main()
{
    int n,i,a,count1=0,count2 = 0;


    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a>=10 && a<=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }

    }

    printf("%d in \n",count1);
    printf("%d out\n",count2);

    return 0;
}
