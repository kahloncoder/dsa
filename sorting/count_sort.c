#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}


int maximum(int A[],int n){
    int max = INT_MAX;
    for(int i;i<n ; i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}

void count_sort(int * A,int n){
    int i,j;

    int max = maximum(A,n);

    int* count=(int *) malloc((max+1)*sizeof(int));

    for(i=0;i< max+1;i++){
        count[i]=0;
    }

    for(i=0;i< n;i++)
    {

        count[A[i]]=count[A[i]]+1;
    }

    i=0;
    j=0;

    while(i <= max){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
  
}



int main(){
//int arr[]={45,54,89,2,48,87};
int A[]={1,2,5,4,5,6};
int n = 6;
printarr(A,n);
count_sort(A,n);
printarr(A,n);

return 0;

}