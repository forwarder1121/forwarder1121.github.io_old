#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
void selectionSort(int list[], int size);
void makeCombination(int arr[], bool isVisted[], int n, int list[], int M, int depth);

int main()
{

    // input
    int N, M;
    scanf("%d %d", &N, &M);
    int list[SIZE];
    for (size_t i = 0; i < N; i++)
        scanf("%d", &list[i]);

    // selectionSort
    selectionSort(list, N);

    int arr[SIZE] = {0};
    bool isVisted[SIZE] = {0};

    // getCombination
    makeCombination(arr, isVisted, N, list, M, 0);

    return 0;
}

void selectionSort(int list[], int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (list[j] < list[minIndex])
                minIndex = j;
        }
        int temp = list[minIndex];
        list[minIndex] = list[i];
        list[i] = temp;
    }
}

// arr[depth]를 채우는 함수
void makeCombination(int arr[], bool isVisted[], int n, int list[], int M, int depth)
{
    if (depth == M)
    {
        for (size_t i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    // 확장
    for (size_t i = 0; i < n; i++)
    {
        // 가지치기
        bool flag = false;
        if (!isVisted[i])
        {
            // 방문
            arr[depth] = list[i];
            isVisted[i] = true;

            // 재귀
            makeCombination(arr, isVisted, n, list, M, depth + 1);
            // backTracking
            isVisted[i] = false;
        }
    }
}
