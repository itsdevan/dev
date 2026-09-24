/*deletion at begining*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void main(){
    node *head=NULL;
    node *temp;
    node *newnode;

    int i,n;

    printf("Enter the number of node: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=malloc(sizeof(node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
        }
        else{

            temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }

            temp->next=newnode;
            
        }
    }

    /*deletion at begining*/

    if(head==NULL){
        printf("The Linked list is empty");
    }

    else{
        temp=head;
        head=head->next;
        free(temp);
    }

    printf("The linked list are: ");
    temp=head;

    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
