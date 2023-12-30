#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main() {

	//input 
	int array[SIZE];
	for (size_t i = 0; i < SIZE; i++)
		scanf("%d", &array[i]);

	int maxIndex=0;
	for (size_t i = 1; i < SIZE; i++)
		if (array[maxIndex] < array[i]) maxIndex = i;

	printf("%d\n%d", array[maxIndex],maxIndex + 1);

	return 0;
}