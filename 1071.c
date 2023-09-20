#include<stdio.h>
int main()
{
    int a,b,tmp=0;
    scanf("%d%d",&a,&b);
    int i;
    if(a<b)
    {
        for( i = (a+1); i > b; i++)
        {
              if(i%2==1 && i%2==-1 )
            {
                tmp += i;
            }
        }

        printf("%d\n",tmp);
    }

    else
    {
        for(i =(b+1); i>a; i++)
        {
            if(i%2==1 || i%2==-1 )
            {
                tmp += i;
            }
        }
        printf("%d\n",tmp);
    }

    return 0;
}
