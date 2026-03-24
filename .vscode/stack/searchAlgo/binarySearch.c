#include <stdio.h>

void binarySearch(int a[], int n, int target) {
    int i = 0, j = n - 1;

    while(i <= j) {
        int mid = (i + j) / 2;

        if(a[mid] == target) {
            printf("Element found at index %d\n", mid);
            return;
        }
        else if(a[mid] > target) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    printf("Element not found\n");
}

int main() {
    int n, target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the elements of array in sorted order: ");
        scanf("%d", &a[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    binarySearch(a, n, target);

    return 0;
}
