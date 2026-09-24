#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;
int value;

void push(){

    if(top==SIZE-1){
        printf("Stack is overflow");
    }

    else{
        printf("Enter the elements: ");
        scanf("%d",&value);

        top++;
        stack[top]=value;

        printf("%d is pushed to stack",value);
        
    }
}


void pop(){
    if(top==-1){
        printf("Stack is underflowed");
    }

    else{
        printf("%d is popped",stack[top]);
        top--;
    }
    }

void peek(){
    if(top==-1){
        printf("Stack is empty");
    }

    else{
        printf("The element at the top is %d: ",stack[top]);
    }


}

void display(){
    int i;
    if(top==-1){
        printf("stack is empty");
    }

    else{
        printf("The values are: ");
        for(i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
    }
}


int main(){
    int choice;

    while(1){

    printf("1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
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
        printf("Invalid cases");
    }

    }


}