#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int stacktop =0;
int stack[SIZE];
void pop();
void push();
void show();

int main(){
    
    int i;
    
    while(1){
        printf("\n\npush in stack  =  1 \n");
        printf("pop from stack =  2 \n");
        printf("show items  = 3 \nend = 4 \n");
        printf("enter th option: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                   push();
                   break;
            case 2:
                   pop();
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

void push(){
    int k;
    if(stacktop == 5){
        printf("\n stack overflow");   
    }
    else{
        printf("\n Enter the value: \n");
        scanf("%d",&k);
        stack[stacktop]=k;
        stacktop=stacktop+1;
    }
}

void pop(){
    if(stacktop == -1){
        printf("\n stack underflow");
    }
    else{
        printf("\n poped value %d",stack[stacktop]);
        stacktop = stacktop - 1;

    }
}

void show(){
    if(stacktop== -1){
        printf("\n stack underflow");
    }
    else{
    for(int i=stacktop;i>=0;i--){
        printf("%d \n",stack[i]);
    }
    }

}