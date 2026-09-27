/*stack using linked list*/

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}node;

node *top=NULL;


void push(){
    node * newnode;
    newnode=malloc(sizeof(node));
    printf("Enter the elment to be popped: ");
    scanf("%d",&newnode->data);

    newnode->next=top;
    top=newnode;

}

void pop(){

    node *temp;
    temp=top;

    if(top==NULL){
        printf("Stack is empty");
    }

    else{
     printf("%d is popped from stack",top->data);
    top=top->next;
    free(temp);   
    }

    
}

void peek(){
    if(top==NULL){
        printf("stack is empty");
    }

    else{
        printf("The element is %d",top->data);
    }
}

void display(){
    node *temp;
    printf("The elements are: ");
    temp=top;

    while(temp!=NULL){

      printf("%d",temp->data);
      temp=temp->next; 

    }

    
}



int main(){
    int ch;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){

        case 1:
        push();
        break;

        case 2:
        pop();
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