#include<stdio.h>

void printarr(int* A,int n){
    
  for(int i = 0 ; i < n ; i++ ){
    printf("%d ",A[i]);
  }
  printf("\n");
}


void bubble_sort(int A[],int n){
    int issorted = 0;
    for(int i=0;i<n-1;i++){
        printf("%d \n",i+1);
        issorted =1;
        for(int j=0;j<n-1-i;j++){
            int tamp ;
            
            if(A[j]>A[j+1]){

                tamp = A[j];
                A[j]=A[j+1];
                A[j+1]=tamp;
                issorted=0;
            }
      
        } 
        if(issorted){
                return;
        }
    }


}



int main(){
//int arr[]={45,54,89,2,48,87};
int arr[]={1,2,5,4,5,6};
int n = 6;
printarr(arr,n);
bubble_sort(arr,n);
printarr(arr,n);

return 0;

}