#include<stdio.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}

int partition(int A[],int low,int high){
    int pivot=A[low];
    int i= low+1;
    int j=high;
    int temp;
 
   do{ 
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;

    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;

    }
    }while(i<j);
    temp = A[low];
    A[low] =A[j];
    A[j] = temp;
    
    return j;

}



void quicksort(int *A,int low, int high){

    int partitionindex;

    if(low< high){
        partitionindex=partition(A,low,high);
        quicksort(A,low,partitionindex-1);
        quicksort(A,partitionindex+1,high);
    }
}


int main(){
int arr[]={5,4,3,2,1,87};
//int arr[]={1,2,5,4,5,6};
int n = 6;
printarr(arr,n);
quicksort(arr,0,n-1);
printarr(arr,n);

return 0;

}