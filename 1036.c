#include <stdio.h>


int main()
{
    double a,b,c,m,n,p;
    scanf("%lf%lf%lf",&a,&b,&c);
    m=(b*b)-(4*a*c);
    if(m<0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        n=((-b) + sqrt(m))/(a+a);
        p=((-b) - sqrt(m))/(a+a);
        printf("R1 = %.5lf\n",n);
        printf("R2 = %.5lf\n",p);


    }
    return 0;
}
