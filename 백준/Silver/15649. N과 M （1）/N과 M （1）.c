#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void permutation(int arr[],bool isVisted[],int N,int M,int depth);
int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    int arr[SIZE]={0};
    bool isVisted[SIZE]={0};

    permutation(arr,isVisted,N,M,0);


    return 0;
}


//arr[depth] 추가하는 함수
void permutation(int arr[],bool isVisted[],int N,int M,int depth){
    //종료 조건 : depth가 M이면 arr는 다 찼음. 출력
    if(depth==M){
        for(int i=0;i<M;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    //방문
    //확장
    for(size_t i=1;i<=N;i++){
        //가지치기
        if(!isVisted[i]){
            isVisted[i]=true;
            arr[depth]=i;
            //재귀
            permutation(arr,isVisted,N,M,depth+1);
            //올라오면서 원상태로 되돌리기
            isVisted[i]=false;
        }
    }
}