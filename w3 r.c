#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n",x,y);
    }

    else if(x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the 2nd quadrant.\n",x,y);

    }
    else if(x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the 3rd quadrant.\n",x,y);
    }


    else if(x > 0 && y < 0)
    {
       printf("The coordinate point (%d,%d) lies in the 4th quadrant.\n",x,y);
    }
    else if(x == 0 && y == 0)
    {
        printf("The coordinate point (%d,%d) lies in the origin.\n",x,y);
    }



    return 0;
}
