#include<stdio.h>
#define SIZE 100
void enqueue(int value);
int dequeue();
void display();
int Queue[SIZE];
int front=-1;
int rear=-1;
void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Dequeued: %d\n", dequeue());
    display();
}
void enqueue(int value){
    if(rear>=SIZE-1){
        printf("Queue Overflow");
        return;
    }
    rear+=1;
    Queue[rear]=value;
    if(front==-1){
        front=0;
    }
}
int dequeue(){
    if(front>rear || front==-1){
        printf("Queue Underflow");
        return -1;
    }
    int value=Queue[front];
    front+=1;
    return value;
}
void display(){
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d\n",Queue[i]);
    }
}