#include<stdio.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}


void  merge(int A[],int mid,int low,int high){
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k=low;


    while(i<= mid && j<= high ){

        if(A[i]<A[j]){
             
             B[k]=A[i];
             i++;
             k++;
        }

        else{
            B[k]=A[j];
            k++;
            j++;
        }   
    }

    while(i<=mid){
        B[k]=A[i];
        k++;
        i++;
    }

    while( j<= high){
        B[k]=A[j];
        k++;
        j++;
    } 

    for(i =low ; i<= high;i++){
        A[i]=B[i];

    }
}

void merge_sort(int A[],int low,int high){
int mid;
 if(low < high){
    mid = (low+high)/2;
    merge_sort(A, low,mid);
    merge_sort(A,mid+1,high);
    merge(A,mid,low,high);
 }

}

int main(){
//int arr[]={45,54,89,2,48,87};
int arr[]={1,2,5,4,5,6};
int n = 6;
printarr(arr,n);
merge_sort(arr,0,6);
printarr(arr,n);

return 0;

}