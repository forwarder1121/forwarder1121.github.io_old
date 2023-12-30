
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100000000

int main()
{
	//input
	int days, limit;
	long long low=MAX,high = 0;
	scanf("%d %d", &days, &limit);
	int* plans = (int*)malloc(sizeof(int) * days);
	for (size_t i = 0; i < days; i++) {
		scanf("%d", &plans[i]);
		low = low > plans[i] ? plans[i] : low;
	}
	
	
	for (size_t i = 0; i < days; i++) high += plans[i];

	
	//parametirc search
	while (low <= high) {
		int mid = (low + high) / 2;
		int count=0;//인출 횟수
		int cur=0; //현재 수중에 있는 돈
		bool pass = true;
		//printf("low %d mid %d high %d\n", low,mid, high);
		for (size_t i = 0; i < days; i++) {
			if (mid < plans[i]) {
				pass = false;
				break;
			}
			if (cur < plans[i]) {//돈이 부족하다면
				count++;
				cur = mid;

			}
			cur -= plans[i];
			
		}
		if (count > limit||!pass) low = mid + 1; //불가능 -> 더 큰 쪽에서 mid를 찾아
		else high = mid - 1;//가능 -> 더 작은 쪽에서 mid찾아
	}
	
	printf("%d", low);
	free(plans);

	return 0;
}

