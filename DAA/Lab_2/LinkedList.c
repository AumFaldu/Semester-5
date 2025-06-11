#include<stdio.h>
#include<stdlib.h>
void insertAtLast(int value);
void display();
void insertAtFirst(int value);
void deleteAtFirst();
void deleteAtLast();
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void main(){
    insertAtLast(20);
    insertAtFirst(10);
    insertAtLast(30);
    display();
    deleteAtFirst();
    deleteAtLast();
    display();
}
void insertAtLast(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtFirst(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void deleteAtFirst(){
    if(head==NULL){
        printf("LinkedList is empty");
        return;
    }
    struct Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteAtLast(){
    if(head==NULL){
        printf("LinkedList is empty");
        return;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    struct Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void display(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}