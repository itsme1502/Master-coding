/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node * InsertatHead(struct node *head, int data){
    struct node * temp = (struct node *) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    return temp; 
}
struct node* InsertatEnd(struct node* head,int value){
 struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;
    struct node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node* InsertatIndex(struct node* head,int index,int value){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node* ptr=head;
    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    temp->data=value;
    ptr->next=temp;
    return head;
}

struct node* deleteAthead(struct node* head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node* deleteAtEnd(struct node* head){
    struct node* x=head;
    struct node* y=head->next;
    while(y->next!=NULL){
        y=y->next;
        x=x->next;
    }
    x->next=NULL;
    free(y);
    return head;
}

struct node* Deleteatindex(struct node* head,int index){
    struct node* x=head;
    struct node* y=head->next;
    int i=0;
    for(int i=0;i<index-1;i++){
        y=y->next;
        x=x->next;
    }
    x->next=y->next;
    free(y);
    return head;
}

void printLL(struct node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
   
struct node *head,*second,*third,*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

 // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    
    //printLL(head);
    head=InsertatHead(head,24);
    head=InsertatEnd(head,62);
    head=InsertatIndex(head,2,29);
   // printLL(head);
    //head=deleteAthead(head);
    
    //printf("Head: %d\n",head->data);
    head=deleteAtEnd(head);
    Deleteatindex(head,2);
    printLL(head);
}
