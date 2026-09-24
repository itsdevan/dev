#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void main(){
    struct node *head=NULL;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));

    newnode->data=10;
    newnode->next=NULL;

     head=newnode;

    newnode=malloc(sizeof(struct node));

    newnode->data=20;
    newnode->next=NULL;

    head->next=newnode;
    
    

    printf("%d\n",head->data);
    printf("%d\n",head->next->data);

    free(head);
    free(head->next);
}
