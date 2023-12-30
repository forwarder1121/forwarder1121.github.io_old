#include <stdio.h>
#define SIZE 20
int main() {

	//input
	int n;
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++) {
		int repeat;
		scanf("%d", &repeat);

		char string[SIZE];
		scanf("%s", string);
		

		for (size_t j = 0; string[j]; j++) {
			for(size_t k=0;k<repeat;k++)
				printf("%c", string[j]);
		}

		printf("\n");
	}


	return 0;
}