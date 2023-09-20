#include<stdio.h>
int main()
{
    int a[100],i,n,sum =0,b[100];

    printf("Input the arry size : ");
    scanf("%d",&n);
    printf("The array size is %d \n",n);
    printf("Input the array :");
    for(i=0; i<n; i++)
    {
        printf("element- %d :",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]= a[i];
    }
    printf("The 1st array is :");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
        sum+=a[i];
    }
    printf("\nThe 2nd array is :");

    b[i]=a[i];
    for(i=0; i<n; i++)
        {
            printf("%d ",b[i]);
        }





    printf("\nthe sum = : %d\n",sum);




    return 0;
}
