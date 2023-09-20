#include<stdio.h>
int main()
{
    int a,sum=0;
    float average=0;
    printf("Input the 10 numbers:\n");
    for(a=1;a<11;a++)
    {
        printf("Number-%d:",a);
        scanf("%d",&a);
        sum=sum+a;
    }
    average=sum/10.00;
    printf("the sum of %d no is %d\n",a,sum);
    printf("The Average is : %f",average);
    return 0;
}
