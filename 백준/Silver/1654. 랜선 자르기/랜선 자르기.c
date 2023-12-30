#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	//input
	int K, N;
	scanf("%d %d", &K, &N);
	int* lines = (int*)malloc(sizeof(int) * N);
	long low = 0, high=0;
	for (size_t i = 0; i < K; i++) {
		scanf("%d", &lines[i]);
		high = high < lines[i] ? lines[i] : high;
	}



	
	while (low <= high) {
		int count = 0; //개수
		long mid = low + (high - low) / 2;
		if (mid == 0) {
			low = mid + 1;
			break;
		}
		int* tempLines = (int*)malloc(sizeof(int) * N);
		for (size_t i = 0; i < K; i++) {
			tempLines[i] = lines[i];
		}
		//랜선 자르기
		bool pass = false;
		for (size_t i = 0; i < K&&!pass; i++) {
			while(tempLines[i] >= mid) {
				tempLines[i] -= mid;
				count++;
				if (count >= N) {
					pass = true; break;
				}
			}
		}
		
		if (count < N) high = mid - 1; 
		else low = mid + 1;
		free(tempLines);
	}
	
	printf("%d", high);

	free(lines);
	return 0;
}