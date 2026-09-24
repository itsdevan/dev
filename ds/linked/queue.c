#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *front=NULL;
node *rear=NULL;

node *createnode(){
    int value;
    printf("enter value:");
    scanf("%d",&value);
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;

}
void enqueue(){
    node *newnode=createnode();
    if(rear==NULL){
        front = rear=newnode;
    }
    rear->next=newnode;
    rear=newnode;
}
void dequeue(){
    node *temp;
    if(front==NULL){
    printf("queue is empty!");
    }else{
        printf("%d is removed ",front->data);
        temp=front;
        front=front->next;
        free(temp);
        if(front==NULL){
            rear=NULL;
        }
    }
    
}
void main(){
    int choice;
    while(1){
        printf("enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
        }

    }
}