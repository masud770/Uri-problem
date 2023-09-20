#include<stdio.h>
int main()
{
    int a,n,i,sum=0;
    //float average;
    scanf("%d%d",&a,&n);
    for(i=0;i<=n;i++)
    {
        printf("%d * %d =%d\n",a,i,(a*i));


        //printf("Number is : %d and cube of the %d is : %d\n",i,i,(i*i*i));
        /*printf("Number %d is %d\n",i,i);
        sum=sum+i;
    }

    printf("The sum of natural number upto %d terms:%d\n",n,sum);
    average = (sum*1.00)/ n;
    printf("The Average is :%f",average);*/

}

    return 0;
}
