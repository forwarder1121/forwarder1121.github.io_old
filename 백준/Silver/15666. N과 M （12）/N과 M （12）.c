#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void selectionSort(int arr[],int size);
void getPermutation(int list[],int start,int N,int result[],int M,int depth,int* previousNodeValue);
int main(){

    //input 
    int N,M;
    scanf("%d %d",&N,&M);
    int list[SIZE];
    for(size_t i=0;i<N;i++)
        scanf("%d",&list[i]);
    
    //selectionSort
    selectionSort(list,N);

    //getPermutation
    int result[SIZE]={0};
    int previousNodeValue=-1;
    getPermutation(list,0,N,result,M,0,&previousNodeValue);

}


//select result[depth] by using element of list
void getPermutation(int list[],int start,int N,int result[],int M,int depth,int* previousNodeValue){
    if(depth==M){
        for(size_t i=0;i<M;i++)
            printf("%d ",result[i]);
        printf("\n");
        return;
    }

    //spreading 
    for(size_t i=start;i<N;i++){
        //pruning : except equal to previousNodeValue
        if(list[i]!=*previousNodeValue){
            result[depth]=list[i];
            *previousNodeValue=-1;
            //pruning : except lower value
            getPermutation(list,i,N,result,M,depth+1,previousNodeValue);
            //backtracking
            *previousNodeValue=list[i];
           
        }
        
    }
}

void selectionSort(int arr[],int size){
    for(size_t i=0;i<size-1;i++){
        int minIndex=i;
        for(size_t j=i+1;j<size;j++)
            if(arr[minIndex]>arr[j]) minIndex=j;
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}