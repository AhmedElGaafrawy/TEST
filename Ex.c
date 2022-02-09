#include <stdio.h>
#include <stdlib.h>
struct node{
    int x;
struct node*next;
}*head;
void printLinkedList ();
void deletefirst ();

int main()
{
    struct node*a,*b,*c,*d;
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
// a->x not a.x because a is a pointer
    a->x= 10;
    b->x= 20;
    c->x= 30;
    d->x=40;

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    head= a;

     printf("%d\t %d\n", a->x, a->next->x);
     deletefirst(head); // passing the head address to this function
     printLinkedList();

    return 0;
}

void printLinkedList()
{
    int i;
    struct node* head2 = head;
    for(i=0; i<4; i++){
        printf("%d \n", head2->x);
        head2= head2->next;
// use while instead of for if you don't know the number of the pointers in node
// while (p != null)
    }
void deletefirst(struct node* temp)
{
    head=head->next;
    free(temp);
}
}
