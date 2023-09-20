#include<stdio.h>
int main()
{
    int n,a=0, b=0, c=0;


    while(1)
    {
        scanf("%d",&n);
        if(n==4)
        {
            break;
        }
        else
        {
        if (n==1)
            {
                a=a+1;
            }
            if (n==2)
            {
                b=b+1;
            }
            if (n==3)
            {
                c=c+1;
            }
            else
                continue;

        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);



    return 0;
}
