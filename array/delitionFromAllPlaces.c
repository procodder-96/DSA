#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    // Input elements
    for(int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    // Deletion logic
    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            for(int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;   // reduce size
            i--;   // recheck current index
        }
    }

    // Print result
    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
