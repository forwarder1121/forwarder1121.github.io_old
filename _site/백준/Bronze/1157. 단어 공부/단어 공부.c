#include <stdio.h>
#include <string.h> 
#define SIZE 1000001

int main() {

	char input[SIZE] = { 0 };
	int alpha[26] = { 0 };

	gets(input);
	for (size_t i = 0; input[i]; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') input[i] -= 'a'-'A';
	}

	for (size_t i = 0; input[i]; i++) {
		alpha[input[i]-'A']++;
	}

	//bebug
	/*for (size_t i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}*/
	

	char mostIndex = 0;
	for (size_t i = 1; i < 26; i++) {
		if (alpha[mostIndex] < alpha[i]) mostIndex = i;
	}
	
	//alpha에는 나온 개수가 써있다.
	for (size_t i = 0; i < 26; i++) {
		if (i != mostIndex && alpha[i] == alpha[mostIndex]) {
			printf("?"); return 0;
		}
	}

	printf("%c", mostIndex + 'A');

	

	return 0;
}