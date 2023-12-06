#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;

};

void triversel(struct node *a){
    while(a!= NULL){

    printf("\n value is %d",a->value);
    a=a->next;}
    
}

void search(int x,struct node *a){
    while(a!= NULL){
        if(x==a->value){

    printf("\n value is %d",a->value);
        break;}
    a=a->next;}
    
}

int main(){
    struct node *head;
    struct node *first;   
    struct node *second;
    struct node *third;

    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    first-> value=1;
    second-> value=2;
    third->value=3;


    first-> next=second;
    second-> next=third;
    third-> next=NULL;
    head=first;

    triversel(head);
    search(1,head);
    return 0;


}