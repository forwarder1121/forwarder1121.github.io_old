#include <stdio.h>

#define SIZE 8
void selectionSort(int arr[],int size);
void getPermutation(int list[],int N,int result[],int M,int depth,int* previousNode);
int main(){

    //input
    int N,M;
    int list[SIZE];
    scanf("%d %d",&N,&M);
    for(size_t i=0;i<N;i++)
        scanf("%d",&list[i]);

    //selectionSort
    selectionSort(list,N);
    
    //getPermutation
    int previousNode=-1;
    int result[SIZE];
    getPermutation(list,N,result,M,0,&previousNode);

    return 0;
}

//select result[depth]
void getPermutation(int list[],int N,int result[],int M,int depth,int* previousNode){
    if(depth==M){
        for(size_t i=0;i<M;i++){
            printf("%d ",result[i]);
        }
        printf("\n");
        return;
    }

    //spreading
    for(size_t i=0;i<N;i++){
        
        //pruning ---> fix this!
        if(*previousNode!=list[i]){ 
            result[depth]=list[i];
            *previousNode=-1;
            getPermutation(list,N,result,M,depth+1,previousNode);
            *previousNode=list[i];
        }
        
        
    }
   
}



void selectionSort(int arr[],int size){
    for(size_t i=0;i<size-1;i++){
        int minIndex=i;
        for(size_t j=i+1;j<size;j++)
            if(arr[minIndex]>arr[j]) minIndex=j;
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}