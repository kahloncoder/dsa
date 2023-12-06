#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int front =-1;
int rear = -1;
int queue[SIZE];
void dequeue();
void enqueue();
void show();

int main(){
    
    int option;
    
    while(1){
        printf("\n\nenqueue in queue  =  1 \n");
        printf("dequeuein queue =  2 \n");
        printf("show items  = 3 \nend = 4 \n");
        printf("enter th option: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                   enqueue();
                   break;
            case 2:
                   dequeue();
                   break;
            case 3:
                   show();
                   break;
            case 4:
                   exit(0);
            default:
                   printf("invalid input");  

        }
    }
   

}

void enqueue(){
    int k;
    if(rear == SIZE-1){
        printf("\n queue overflow");   
    }
    else{
        printf("\n Enter the value: \n");
        scanf("%d",&k);
        queue[rear]=k;
        rear=rear+1;
    }
}

void dequeue(){
    if(front == -1 && front>rear){
        printf("\n queue is empty");
    }
    else{
        printf("\n poped value %d",queue[front]);
        front=front+1;

    }
}

void show(){
    if(front == rear){
        printf("\n queue is empty ");
    }
    else{

     for(int i= front; i<=rear ;i++){
        printf("%d \t",queue[i]);
    }
    }

}