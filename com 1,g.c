#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i= 1; i>=n; i++)
    {

        scanf("%d",&a);
        if(1<=a<100)
        {
            printf("Easy",a);
        }

        else if(100<= a <200)
        {
            printf("Medium",a);
        }
        else(200<= a <=300)
        {
            printf("Hard",a);
        }



    }
    return 0;
}
