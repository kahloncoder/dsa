#include<stdio.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}

void selection_sort(int *A,int n){
    int indexmin,temp,j;

    for(int i=0;i<n-1;i++){
       
       indexmin=i;
       for(j=i+1;j<n;j++){
        if(A[indexmin] > A[j] ){
           indexmin=j; 
        }
       }
       temp=A[i];
       A[i]=A[indexmin];
       A[indexmin]=temp; 
    }
}



int main(){
int arr[]={5,4,3,2,1,87};
//int arr[]={1,2,5,4,5,6};
int n = 6;
printarr(arr,n);
selection_sort(arr,n);
printarr(arr,n);

return 0;

}