#include <stdio.h>

void transformArray(int nums[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        if(nums[i] % 2 == 0) {
            nums[i] = 0;
        } else {
            nums[i] = 1;
        }
    }
}

void sortAscending(int nums[], int size) {
    int i, j;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    int size, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int nums[size];

    printf("Enter %d numbers:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    transformArray(nums, size);
    sortAscending(nums, size);

    printf("Transformed array is: ");
    for(i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}