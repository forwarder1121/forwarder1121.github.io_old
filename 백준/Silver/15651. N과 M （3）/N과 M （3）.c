#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void PermutaionWithRepetition(int arr[], int isVisted[], int N, int M, int depth);
int main()
{

    // input
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[SIZE] = {0};
    int isVisted[SIZE] = {0};

    PermutaionWithRepetition(arr, isVisted, N, M, 0);

    return 0;
}

// arr[depth]를 선택하는 함수
void PermutaionWithRepetition(int arr[], int isVisted[], int N, int M, int depth)
{
    if (depth == M)
    {
        for (int i = 0; arr[i]; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    // 확장
    for (size_t i = 1; i <= N; i++)
    {
        // 가지치기 : 불필요 (모든 수를 선택하는데 제한사항이 없음)

        // 방문
        isVisted[i] = true;
        arr[depth] = i;
        // 재귀
        PermutaionWithRepetition(arr, isVisted, N, M, depth + 1);
        // 복원
        isVisted[i] = false;
    }
}