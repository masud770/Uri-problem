#include<stdio.h>
int main()
{
    int a[100],i,max;
    for(i=1; i<=10; i++)
    {
        scanf("%d",&a[i]);
    }

max= a[0];
for(i=1; i<=10; i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }


}

printf("The max value is %d ",max);


    return 0;
}
