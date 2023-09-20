#include<stdio.h>
int main()
{
    char a[1000000];
    char b[1000000];
    int x;
    gets(a);
    gets(b);
    x=strcmp(strlwr(a),strlwr(b));
    if(x==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
