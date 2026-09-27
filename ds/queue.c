/*Queue using array*/
#include<stdio.h>
#define max 5

int queue[max];
int front=-1,rear=-1;
int value;

void enqueue(){
    if(queue[max-1]){
        printf("Queue is full");
    }

    else{
        printf("Enter the element to be inserted: ");
        scanf("%d",&value);
        rear++;
        queue[rear]=value;

        if(front==-1){
            front=0;
        }

    }
}

void dequeue(){
    if(front==-1 || rear<front){
        printf("Query is empty");
    }
    else{
        printf("%d is deleted from query",queue[front]);
        front++;

        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}

void peek(){
    if(front==-1 || front>rear){
        printf("Queue is empty");
    }
    else{
        printf("The front element is:%d",queue[front]);
    }
}

void display(){
    if(front==-1 || front>rear){
        printf("Queue is empty");
    }
    else{

        printf("The element are: ");

        for(int i=front;i<=rear;i++){
        printf("%d",queue[i]);
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