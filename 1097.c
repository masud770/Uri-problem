#include <stdio.h>
int main()
{
    int i, j,b,a=7;
    for(i=1; i<=9; i=i+2)
    {
        for(b=1, j=a; b<=3; b++,j--)
        {

            printf("I=%d J=%d\n",i,j);
        }
        a=a+2;


    }

    return 0;

}
