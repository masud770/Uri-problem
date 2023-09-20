#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    while (i<6)
    {
        if(n%2!=0)
        {
            printf("%d\n",n);
            i++;
        }
        n++;
    }

    return 0;
}
