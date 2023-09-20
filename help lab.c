#include<stdio.h>
typedef struct rana
{
    char data ;
    struct rana *next;
} rana;

rana *head;

void delet_value(char Data)
{
    rana *trv;

    rana *temp, *del;


    int c=0;
    trv=head ;
    while(trv!=NULL)
    {
        c++;
        if(trv->data==Data)
        {
            break;
        }
        trv = trv->next;
    }


    temp=head;
    if(temp==NULL)
    {
        printf("linked list dosenot exits\n");
        return;
    }
    else if(c==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    else
    {
        c=c-2;
        while(c--)
        {
            temp=temp->next;
            if(temp->next==NULL)
            {
                printf("the position dosenot exits\n");
                break;
            }
        }
        del=temp->next;
        temp ->next =del->next ;
        free(del);
    }
}


void print()
{
    rana *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("'%c'\t",temp->data);
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
    delet_value('Z');
    print();
    return 0;
}
