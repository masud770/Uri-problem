#include<stdio.h>
int main()
{
    int a;
    printf("1st number = ");
    scanf("%d",&a);
    int b;
    printf("2nd Number = ");
    scanf("%d",&b);
    int c;
    printf("3rd Number = ");
    scanf("%d",&c);
    if(a>b && b>=c)
        printf("The 1st Number is the greatest among three\n");
    else if(a<b && a>=c)
        printf("The 2nd Number is the greatest among three\n");
    else
        printf("The 3rd Number is the greatest among three\n");



        return 0;
}

