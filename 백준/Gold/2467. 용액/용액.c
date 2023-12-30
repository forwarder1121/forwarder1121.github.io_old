#include <stdio.h>
#include <stdlib.h>
#define MAX 2000000001

int main() {

    //input
    int n;
    scanf("%d", &n);
    int* liquids = (int*)malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &liquids[i]);
    int idealLiquidsIndex[2] = { 0 };
    int idealResult = MAX;

    for (size_t i = 0; i < n - 1; i++) {
        int low = i + 1;
        int high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            int mixedResult = liquids[i] + liquids[mid];
            if (mixedResult == 0) {
                printf("%d %d", liquids[i], liquids[mid]);
                return 0;
            }
            else if (mixedResult > 0) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if (abs(liquids[i] + liquids[high]) < abs(idealResult) && i != high) {
            idealResult = abs(liquids[i] + liquids[high]);
            idealLiquidsIndex[0] = i;
            idealLiquidsIndex[1] = high;
        }
        else if (abs(liquids[i] + liquids[low]) < abs(idealResult) && i != low) {
            idealResult = abs(liquids[i] + liquids[low]);
            idealLiquidsIndex[0] = i;
            idealLiquidsIndex[1] = low;
        }
    }

    if (liquids[idealLiquidsIndex[0]] < liquids[idealLiquidsIndex[1]])
        printf("%d %d", liquids[idealLiquidsIndex[0]], liquids[idealLiquidsIndex[1]]);
    else
        printf("%d %d", liquids[idealLiquidsIndex[1]], liquids[idealLiquidsIndex[0]]);
    return 0;
}
