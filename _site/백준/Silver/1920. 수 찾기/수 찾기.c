
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
int binarySearch(int* array, int size, int target);
int sorted[MAX_SIZE];
void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	/* 분할 정렬된 list의 합병 */
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}

	// 남아 있는 값들을 일괄 복사
	if (i > mid) {
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	// 남아 있는 값들을 일괄 복사
	else {
		for (l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}

	// 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
};
void merge_sort(int list[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
		merge_sort(list, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
		merge_sort(list, mid + 1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
		merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
	}
}

int main()
{
	//input
	int n, m;
	scanf("%d", &n);
	int* list = (int*)malloc(sizeof(int) * n);
	for (size_t i = 0; i < n; i++)
		scanf("%d", &list[i]);
	scanf("%d", &m);
	int* targets = (int*)malloc(sizeof(int) * m);
	for (size_t i = 0; i < m; i++)
		scanf("%d", &targets[i]);

	//sort
	merge_sort(list, 0, n - 1);


	//search
	for (size_t i = 0; i < m; i++)
		printf("%d\n", binarySearch(list, n, targets[i]));


	free(list);
	free(targets);
	return 0;
}



int binarySearch(int* array, int size, int target) {
	int left = 0, right = size - 1;
	int mid;
	while (right >= left) {
		mid = (left + right) / 2;
		if (target == array[mid]) return 1;
		else if (target > array[mid]) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 0;
}