#include <stdio.h>

#define SIZE 1000000
int main() {

	char list[SIZE] = { 0 };
	gets(list);
	int count = 0;
	for (size_t i = 0; list[i]; i++) {
		if (i == 0 && list[i] != ' ') count++;
		if (list[i] == ' ' && list[i + 1] != 0) {
			count++;
		}
	}
	printf("%d", count);

	

	return 0;
}