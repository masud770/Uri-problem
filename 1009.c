#include<stdio.h>
int main()
{
    char name;
    double A,B,TOTAL;
    scanf("%s%lf%lf",&name,&A,&B);
    TOTAL = (A + B*.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
