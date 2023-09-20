// linear search and count


#include<stdio.h>
int main(void)
{
    int a[100],i,n,flag=0,key,count=0;
    printf("The number of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {


    if(a[i]==key)
    {
        printf(" Found and the position at %d\n",i);
        flag=1;
        count++;
    }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }
    else

        printf("%d\n",count);




    return 0;
}
