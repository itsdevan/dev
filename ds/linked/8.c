/*deletion at any position*/

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
    node *temp2;
    node *newnode;

    int i,n,position;

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

    /*deletion at any position*/

    printf("Enter the position: ");
    scanf("%d",&position);

    if(head==NULL){
        printf("The Linked list is empty");
    }

    else if(position<=0){
        printf("Invalid");
    }

    else if(position==1){
        temp=head;
        head=head->next;
        free(temp);
        }

    else{
        
        temp=head;

        for(i=1;i<position-1 && temp!=NULL;i++)
        {
          temp=temp->next;  
        }
        
        temp2=temp->next;
            temp->next=temp->next->next;
            free(temp2);

        
    }
    

    printf("The linked list are: ");
    temp=head;

    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
