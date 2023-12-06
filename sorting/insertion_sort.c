#include<stdio.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}

void insertion_sort(int *A,int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=A[i];
        j=i-1;

        while(j >= 0 && A[j]>key){
            
            A[j+1] = A[j];
            printf("%d  %d\n",key,A[j]);

            j--;
        }
        A[j+1]=key; 
    }
}


int main(){
int arr[]={5,4,3,2,1,87};
//int arr[]={1,2,5,4,5,6};
int n = 6;
printarr(arr,n);
insertion_sort(arr,n);
printarr(arr,n);

return 0;

}