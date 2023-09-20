//linear search


#include<stdio.h>
int main(void)
{
    int a[100],i,n,flag=0,key,count=0;
    printf("The size of an array:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" the key word is :");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("Found\n");
            flag=1;
            //count++;
           break;
        }

    }
    if(flag==0)
    {
        printf("Not found\n");
    }

    else


    for(i=0;i<n;i++)
    {
        if(a[i]>key)
        {
            count++;
        }
    }
    printf("%d is found %d times",key,count);
}
