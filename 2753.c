#include<stdio.h>
int main()
{
    char b;
    int i;
    for(i=97,b='a'; i<123,b<='z'; i++,b++)
    {
        printf("%d e %c\n",i,b);

    }
    return 0;
}
