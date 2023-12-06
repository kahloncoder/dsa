#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
void printlinkedlist(struct node *t){
    while(t!=NULL){
        printf("%d",t->data);
        t=t->next;
    }

}

void searchlinkedlist(struct node *t,int a){
    while(t!=NULL){
        if(t->data==a){
            printf("found");
            break;


        }
    }
    printf("not found");

   
};


int main(){
    int a = 2;
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
     
    one-> data = 1;
    two-> data = 2;
    three-> data = 3;

    one -> next= two;
    two -> next= three;
    three -> next= NULL;
    
    head = one;
    printlinkedlist(head);
    searchlinkedlist(head,a);


}