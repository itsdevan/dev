#include <stdio.h>
#include <stdlib.h>

 struct node
{
    int data;
    struct node *next;
} ;

void main(){
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode;

    int n,i;
    printf("Enter the number of node");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=malloc(sizeof(struct node));
        printf("Enter your data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;


        if(head==NULL){
            head=newnode;
        }

        else{
            temp=head;

            while (temp->next!=0)
            {
                temp=temp->next;
            }

            temp->next=newnode;
            
        
        }

    }


    printf("Linked list ");
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;

    }


}


    