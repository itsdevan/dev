/*Queue using linked list*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *rear=NULL;
node *front=NULL;


void enqueue(){

    node *newnode;

    newnode=malloc(sizeof(node));
    
        printf("Enter the element to be inserted: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(front==NULL){
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
        printf("%d is inserted into queue",newnode->data);
    }


void dequeue(){

    node *temp;
    if(front==NULL){
        printf("Query is empty");
    }
    else{
        if(front==NULL){
            rear=NULL;
        }

        temp=front;
        printf("%d is removed from the queue",front->data);
        front=front->next;

        free(temp);
}
}

void peek(){
    if(front==NULL){
        printf("Queue is empty");
    }
    else{
        printf("The front element is:%d",front->data);
    }
}

void display(){
    node *temp;
    if(front==NULL){
        printf("Queue is empty");
    }
    else{

        printf("The element are: ");
        temp=front;

        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }

        
    }
}



int main(){
    int ch;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){

        case 1:
        enqueue();
        break;

        case 2:
        dequeue();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        case 5:
        return 0;

        default:
        printf("Invalid");


        }

        
}

    
}