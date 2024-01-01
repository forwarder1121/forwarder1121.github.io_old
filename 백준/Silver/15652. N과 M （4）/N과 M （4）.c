#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void combinationWithRepetition(int arr[],bool isVisted[],int N,int M,int depth);

int main(){

    //input
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[SIZE]={0};
    bool isVisted[SIZE]={0};
    combinationWithRepetition(arr,isVisted,N,M,0);
   

    return 0;
}
//arr[depth]를 선택하는 함수
void combinationWithRepetition(int arr[],bool isVisted[],int N,int M,int depth){

    if(depth==M){
        for(size_t i=0;i<M;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return; 
    }

    //확장
    for(size_t i=1;i<=N;i++){
        //가지치기
        bool flag=true; //숫자 i를 포함시키는게 맞는 것인가?
        for(size_t j=i+1;j<=N;j++)
            if(isVisted[j]) flag=false;
        
        //방문
        if(flag){
            isVisted[i]=true;
            arr[depth]=i;
            //재귀
            combinationWithRepetition(arr,isVisted,N,M,depth+1);
            //BackTracking
            isVisted[i]=false;
        }
    }
}