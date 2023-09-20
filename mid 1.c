#include <stdio.h>

int main()
{
    char i[40];
    printf ("Enter your id: ");
    scanf ("%s",&i);


    printf ("After the reverse of my id:  %s\n", strrev(i));
    return 0;
}

