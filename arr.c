#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    scanf("%d",&n);
    printf("Input %d elements in the arry:\n",n);
    for(i=0; i<n; i++)
    {
        printf("element- %d : ",i);
        scanf("%d",&a[i]);

    }
    printf("The values store into the array are :");
    for(i=0; i<n; i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\nThe values store into the array in reverse are :");
    for(i=n-1; i>=0; i--)
    {
        printf("%d, ",a[i]);
        sum+=a[i];
    }

printf(" \nSum of all elements stored in the array is %d",sum);


    return 0;
}
