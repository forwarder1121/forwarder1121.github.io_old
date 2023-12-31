#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void permutation(int* arr,bool* isVisted, int N, int M,int depth);
int main(){

    int arr[SIZE]={0}; // 순열을 저장하는 배열
    bool isVisted[SIZE]={0}; // 방문 여부를 저장하는 배열
    
    //input
    int N,M;
    scanf("%d %d",&N,&M);
    
    permutation(arr,isVisted,N,M,0);

    return 0;
}

void permutation(int* arr,bool* isVisted, int N, int M,int depth){
    if(depth==M){ // depth가 M이랑 같으면 arr 출력
        for(int i=0;i<M;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    for(size_t i=1;i<=N;i++){
        if(!isVisted[i]){   // 해당 번호를 방문하지 않았다면
            isVisted[i]=true; // 방문
            arr[depth]=i; // arr에 저장
            permutation(arr,isVisted,N,M,depth+1); // 재귀 함수 호출
            isVisted[i]=false; // 방문 해제 (중요!)
        }
    }

}