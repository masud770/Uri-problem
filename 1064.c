#include<stdio.h>
int main()
{

    double n,average = 0;
    int i,sum=0;
    for( i=0; i<=5;i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            average = average + n;
            sum ++ ;
        }
    }

    average = average/ sum;
    printf("%d valores positivos\n",sum);
    printf("%.1lf\n",average);



    return 0;








}
