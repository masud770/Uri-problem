#include<stdio.h>
int main()
{
    double a,b,c,area,perimetro;
    scanf("%lf%lf%lf",&a,&b,&c);
    perimetro = (a+b+c);
    area =(a+b)*c/2;
    if(a<(b+c) && b<(a+c) && c<(a+b))
    {
        printf("perimetro = %.1lf\n",perimetro);
    }
    else
    {
        printf("Area = %.1lf\n",area);
    }

    return 0;
}

