#include <stdio.h>

void reverse(int a[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
