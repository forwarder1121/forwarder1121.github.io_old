
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	char name[12];
}Tier;

int binarySearch(Tier* array, int size, int target);



int main()
{
	//input
	int N, M;
	scanf("%d %d", &N, &M);
	Tier* tiers = (Tier*)malloc(sizeof(Tier) * N);
	for (size_t i = 0; i < N; i++)
		scanf("%s %d", tiers[i].name, &tiers[i].num);
	int* attacks = (int*)malloc(sizeof(int) * M);
	for (size_t i = 0; i < M; i++)
		scanf("%d",&attacks[i]);

	for (size_t i = 0; i < M; i++) {
		binarySearch(tiers,N,attacks[i]);
	}
	
	free(tiers);
	free(attacks);

	return 0;
}



int binarySearch(Tier* array, int size, int target) {
	int left = 0, right = size - 1;
	int mid=0;
	while (right >= left) {
		mid = (left + right) / 2;
		if (target > array[mid].num) {
			left = mid+1;
		}
		else {
			right = mid - 1;
		}
	}
	printf("%s\n", array[right+1].name);
	return;
}