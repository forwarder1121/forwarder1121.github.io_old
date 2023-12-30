#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Time Complexity : O(nlogn)

int main() {

	//input
	int n, limit;
	scanf("%d %d", &n, &limit);
	int* lectures = (int*)malloc(sizeof(int) * n);
	for (size_t i = 0; i < n; i++)
		scanf("%d", &lectures[i]);
	int low = 1, high=0;
	for (size_t i= 0; i < n; i++) {
		high += lectures[i];
	}


	
	while (low <= high) {
		int count = 0; //소비된 블루레이 개수
		int mid = low + (high - low) / 2;

		//블루레이 기록하기 
		int cur_bluray = 0;
		bool isEnough = true;
		for (size_t i = 0; i <n; i++) {
			if (lectures[i] > mid) {
				isEnough = false;
				break;
			}
			if (lectures[i] > cur_bluray) {
				count++;
				cur_bluray = mid;
			}
			cur_bluray -= lectures[i];
		}
		
		if (count > limit||!isEnough) low = mid + 1;
		else high = mid - 1;
	}
	
	printf("%d", low);

	free(lectures);
	return 0;
}