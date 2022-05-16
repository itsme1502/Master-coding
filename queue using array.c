#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
#define max 6
 int a[max];
 int front=-1,rear=-1;
 void enqueue(int x){
     if(rear==max-1) printf("Queue Overflow\n");
     else{
        if(front==-1){
            front=0;
        } 
        rear++;
        a[rear]=x;
     }
 }

 void dequeue(){
     if(front==-1 || front>rear){
         printf("Queue underflow\n");
     }
     else{
         printf("The following element is dequeued %d\n",a[front]);
         front++;
     }
 }
 
 void print(){
     if(front==-1) printf("Queue is empty\n");
     else{
         printf("Displaying the elements of the Queue:\n");
         for(int i=front;i<=rear;i++){
             printf("%d",a[i]);
             printf(" ");
     }
     printf("\n");
     }
 }
 
 int main(){
     print();
     enqueue(5);
     enqueue(6);
     enqueue(62);
     print();
     enqueue(82);
     enqueue(52);
     print();
     dequeue();
     dequeue();
     
     
 }
