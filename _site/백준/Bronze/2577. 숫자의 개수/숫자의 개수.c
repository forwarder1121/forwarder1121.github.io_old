#include <stdio.h>

int main() {

	//input 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int result = a * b * c;

	int history[10] = { 0 };
	while (result>0) {
		history[result % 10]++;
		result /= 10;
	}
	for (size_t i=0; i < 10; i++) {
		printf("%d\n", history[i]);
	}
	return 0;
}