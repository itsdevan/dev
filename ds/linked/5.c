/*Insert at any position*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node*next;
}node;

void main(){
    node *head=NULL;
    node *temp;
    node *newnode;

    int n,i,position;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

    newnode=malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
    }

    else
    {
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newnode;
        
    }
    }


    newnode=malloc(sizeof(node));
    printf("Enter the element: ");
    scanf("%d",&newnode->data);

    printf("Enter your position: ");
    scanf("%d",&position);


    if(position==1){
        newnode->next=head;
        head=newnode;
    }

    else{

        temp=head;

        for(i=1;i<position-1;i++){
            temp=temp->next;
        }

        newnode->next=temp->next;
        temp->next=newnode;
    }


    printf("Linked list: ");

    temp=head;

    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }


    
    }
