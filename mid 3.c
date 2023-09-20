#include<stdio.h>
struct student
{
    char Name[30];
    int Age;
    float Height;
    float CGPA;
    char Dept[50];
};
int main()
{
    struct student s1[2];

    {
        scanf("%s",&s1.Name);
        scanf("%d",&s1.Age);
        scanf("%f",&s1.Height);
        scanf("%f",&s1.CGPA);
        scanf("%s",&s1.Dept);
    }
    for(i=0;i<2;i++)
    {
        printf("%s\n",s1[i].Name);
        printf("%d\n",s1[i].Age);
        printf("%f\n",s1[i].Height);
        printf("%f\n",s1[i].CGPA);
        printf("%s\n",s1[i].Dept);
    }
    return 0;
}


