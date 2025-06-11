#include<stdio.h>
#define SIZE 100
void push(int element);
int pop();
void display();
int peek();
int peep(int pos);
void change(int pos,int value);
int Stack[SIZE];
int top=-1;
void main(){
    push(5);
    push(10);
    push(15);
    printf("Popped: %d\n", pop());
    printf("Peep at 2nd position: %d\n", peep(2));
    printf("Peek: %d\n", peek());
    change(1, 50);
    display();   
}
void push(int value){
    if(top>=SIZE-1){
        printf("Stack Overflow");
        return;
    }
    top++;
    Stack[top]=value;
}
int pop(){
    if(top<0){
        printf("Stack Underflow");
        return -1;
    }
    int value=Stack[top];
    top-=1;
    return value;
}
void display(){
    if(top==-1){
        printf("Stack is empty");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d\n",Stack[i]);
    }
}
int peek(){
    if(top<0){
        printf("Stack is empty\n");
        return -1;
    }
    return Stack[top];
}
int peep(int pos){
    if(top-pos+1<0){
        printf("Position Invalid\n");
        return -1;
    }
    return Stack[top-pos+1];
}
void change(int pos,int value){
    if(top-pos+1<0){
        printf("Position Invalid\n");
        return;
    }
    Stack[top-pos+1]=value;
}
