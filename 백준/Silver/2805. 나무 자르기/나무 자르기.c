
#include <stdio.h>
#include <stdlib.h>


int main()
{
	//input
	int n, require, low = 0, high = 0;
	scanf("%d %d", &n, &require);
	int* trees = (int*)malloc(sizeof(int) * n);
	for (size_t i = 0; i < n; i++) {
		scanf("%d", &trees[i]);
		high = high < trees[i] ? trees[i] : high;
	}
	
	//parametirc search
	while (low <= high) {
		long long sum = 0;
		int mid = (low + high) / 2;
		for (size_t i = 0; i < n; i++) {
			sum += trees[i]>=mid?trees[i]-mid :0 ;
			
		}
		if (sum < require) high = mid - 1; 
		else low = mid + 1; 
	}
	
	printf("%d", high);
	free(trees);

	return 0;
}

