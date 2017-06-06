#include <stdio.h>

void swap(int *arr, int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void bubble_sort(int *arr, int len, int *count) {
    int total_swaps = 0;
    for (int i = 0; i < len; i++) {
        int curr_swaps = 0;
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                curr_swaps++;
            }
        }
        total_swaps += curr_swaps;

        if (!curr_swaps) {
            break;
        }
    }
    *count = total_swaps;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count;
    bubble_sort(a, n, &count);
    printf("Array is sorted in %d swaps.\n", count);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n - 1]);
    return 0;
}
