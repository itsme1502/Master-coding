#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node* next;
} *head = NULL;

int isEmpty(){
    if(head==NULL) return 1;
    else return 0;
}

void push(int x){
    struct node* newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Stack Overflow\n");
    }
    else{
        newNode->data=x;
        newNode->next=NULL;
        
        newNode->next=head;
        head=newNode;
        
    }
}
int peek(){
    if(isEmpty()) printf("Stack Underflow\n");
    else head->data;
}
int pop(){
    struct node* temp;
    int val;
    if(isEmpty()) printf("Stack Underflow\n");
    else{
        temp=head;
        val=temp->data;
        head=head->next;
        free(temp);
        temp=NULL;
        return val;
        
    }
}
void print(){
    struct node* temp;
    temp=head;
    if(isEmpty()) printf("Stack Underflow\n");
    else {
        printf("Displaying the elements of Stack\n");
        while(temp!=NULL){
            printf("%d",temp->data);
            printf("\n");
            temp=temp->next;
        }
        printf("\n");
    }
}

int main(){
    if(isEmpty()) printf("STack is empty\n");
    push(5);
    push(6);
    print();
    push(3);
    push(4);
    print();
    printf("This element has been popped %d\n",pop());
    printf("This element has been popped %d\n",pop());
    
}
