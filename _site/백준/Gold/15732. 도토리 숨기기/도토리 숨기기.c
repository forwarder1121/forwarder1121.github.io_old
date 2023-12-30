#include <stdio.h>
#include  <stdlib.h>
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
typedef struct {
	int start;
	int end;
	int space;
}Rule;

int main() {

	//input
	int n,k,d;
	scanf("%d %d %d", &n, &k,&d);
	Rule* rules = (Rule*)malloc(sizeof(Rule) * k);
	for (size_t i = 0; i < k; i++) {
		scanf("%d %d %d", &rules[i].start, &rules[i].end, &rules[i].space);
	}
	long long low = 1, high = n;
	while (low <= high) {
		long long  mid = (low + high) / 2;
		long long  usedAcorn = 0;
		
		for (size_t i = 0; i < k; i++) {
			if (mid < rules[i].start) continue;
			usedAcorn += (MIN(rules[i].end, mid)-rules[i].start) / rules[i].space + 1;
		}
		//printf("마지막 박스: %d, 사용된 도토리: %d, 사용 가능 도토리 개수: %d low: %d, high: %d\n", mid, usedAcorn, d, low, high);
		
		if (usedAcorn >= d) high = mid - 1;
		else low = mid + 1;
		
	}

	printf("%lld", low);


	return 0;
}
