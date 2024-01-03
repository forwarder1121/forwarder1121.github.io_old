#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void selectionSort(int arr[],int size);
void getCombination(int list[],int isVisted[],int N,int arr[],int M,int depth,int* previous_node);
int main(){

    //input
    int N,M;
    scanf("%d %d",&N,&M);
    int list[SIZE]={0};
    for(size_t i=0;i<N;i++){
        scanf("%d",&list[i]);
    }
    
    selectionSort(list,N);

    int previous_node=-1;
    int arr[SIZE]={0};
    int isVisted[SIZE]={0};
    getCombination(list,isVisted,N,arr,M,0,&previous_node);
    

    return 0;
}

//select arr[depth]
void getCombination(int list[],int isVisted[],int N,int arr[],int M,int depth,int* previous_node){
    if(depth==M){
        for(size_t i=0;i<M;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return;
    }

    for(size_t i=0;i<N;i++){
        //pruning
        bool flag=true;
        for(size_t j=i;j<N;j++){
            if(isVisted[j]) flag=false;
        }
        if(*previous_node==list[i]) flag=false;
            
        if(flag){
            isVisted[i]=true;
            
            arr[depth]=list[i];
            getCombination(list,isVisted,N,arr,M,depth+1,previous_node);
            //backTracking
            isVisted[i]=false;
            *previous_node=list[i];
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