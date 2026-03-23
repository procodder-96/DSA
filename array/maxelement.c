#include <stdio.h>

int majorityElement(int arr[], int n) {
    int hash[1000] = {0};  // assuming values are within 0–999

    // Count frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Check for majority
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] > n / 2) {
            return arr[i];
        }
    }

    return -1; // no majority element
}

int main() {
    int arr[] = {2, 2, 1, 2, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = majorityElement(arr, n);

    if (result != -1)
        printf("Majority Element: %d\n", result);
    else
        printf("No Majority Element\n");

    return 0;
}
