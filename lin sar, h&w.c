#include<stdio.h>
int main(void)
{
    int a[500],n,i,key,count,flag;
    key=0;
    count=0;
    flag =0;
    printf("Input the asize of arry :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);


    }
    scanf("input key = %d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]=key)
        {
            printf("Found at position %d\n",a[i]);
            flag=1;
            count++;

        }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }
    else{
        printf("Found ant at the Times %d\n",count);
    }


    return 0;
}
