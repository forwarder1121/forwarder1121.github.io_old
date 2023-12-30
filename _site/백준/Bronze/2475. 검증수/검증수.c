#include <stdio.h>
#define square(x) x*x
int main() {

	//input
	int list[5];
	for (size_t i = 0; i < 5; i++) {
		scanf("%d", &list[i]);
	}
	int result = 0;
	for (size_t i = 0; i < 5; i++) {
		result += square(list[i]);
	}
	printf("%d", result%10);

	return 0;
}