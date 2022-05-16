#include<stdio.h>
#include<stdlib.h>
 
#define max 6
 int stack[max];
 int top=-1;
 
 int isFull(){
     if(top==max-1) return 1;
     else return 0;
 }
 
 int isEmpty(){
     if(top==-1) return 1;
     else return 0;
 }
 
 void push(int x){
     if(isFull()){
         printf("Stack overflow\n");
         return;
     } 
     top++;
     stack[top]=x;
 }
 
 int pop(){
     int val;
     if(isEmpty()){
         printf("Stack underflow\n");
     } 
     val=stack[top];
     top--;
     return val;
 }
 
 int atTop(){
     if(isEmpty()){
         printf("Stack is Empty\n");
     }
     else return stack[top];
 }
 
 void print(){
     for(int i=top;i>=0;i--){
         printf("%d",stack[i]);
         printf(" ");
     }
     printf("\n");
 }
 
 int main(){
     
     if(isEmpty()) printf("stack is Empty\n");
     
     push(7);
     push(5);
     push(2);
     push(2);
     push(2);
     push(2);
     if(isFull()) printf("Stack is full\n");
     printf("Displaying the elements of the stack\n");
     printf("This element has been popped %d\n",pop());
     print();
     
 }
