#include <stdio.h>
#include <stdlib.h>

void left_rotate(int *arr, int size, int rotation) {
    if (size != rotation) {
        for (int i = rotation % size; i < size; i++) {
            printf("%d ", arr[i]);
        }
        for (int j = 0; j < rotation % size; j++) {
            printf("%d ", arr[j]);
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &(a[i]));
    }
    left_rotate(a, n, k);
    return 0;
}
