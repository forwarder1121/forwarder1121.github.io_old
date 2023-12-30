#include <stdio.h>
#include <stdbool.h>
#define MAX 1000000000
int compare(const void* a, const void* b);


int main() {

	//input
	int n, limit;
	scanf("%d %d", &n,&limit);
	int* homes = (int*)malloc(sizeof(int) * n);
	for (size_t i = 0; i < n; i++)
		scanf("%d", &homes[i]);

	qsort(homes, n, sizeof(int), compare);

	int low = 1, high = MAX;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		int usedRouter = 0;
		int nextPoint = 0;
		for (size_t i = 0; i < n; i++) {
			if (homes[i] >= nextPoint) {
				usedRouter++;
				nextPoint =homes[i]+ mid;
			}
		}
		
		if (usedRouter>= limit) low = mid + 1;
		else high = mid - 1;
	}
	printf("%d", high);

	return 0;
}

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)

		return 1;

	else if (*(int*)a < *(int*)b)

		return -1;

	else

		return 0;
	
}