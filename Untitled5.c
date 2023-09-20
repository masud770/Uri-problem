#include <stdio.h>
int main()
{
char s[20],c;
scanf("%s",s);
int i;
fflush(stdin);
printf("enter a character\n");
scanf("%c",&c);
int found = 0;
for(i=0; s[i] != '\0';i++)
{
if(s[i] == c)
{
found = 1;
}
}
if(found == 1)
printf("Found\n");
else
printf("Not Found\n");
return 0;
}
