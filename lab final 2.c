#include<stdio.h>
typedef struct rana
{
char data ;
struct rana *next;
} rana;
rana *head;

void print()
{
rana *temp;
temp = head;
while(temp!=NULL)
{
printf("%c ",temp->data);
temp = temp -> next;
}
}

int main()
{
rana *a = NULL;
rana *b = NULL;
rana *c = NULL;
rana *d = NULL;
a = (rana*)malloc(sizeof(rana));
b = (rana*)malloc(sizeof(rana));
c = (rana*)malloc(sizeof(rana));
d = (rana*)malloc(sizeof(rana));
a -> data = 'A';
b -> data = 'n';
c -> data = 'Z';
d -> data = 'i';
a -> next = b;
b -> next = c;
c -> next = d;
d -> next = NULL;

head = a ;
print();
return 0;
}
