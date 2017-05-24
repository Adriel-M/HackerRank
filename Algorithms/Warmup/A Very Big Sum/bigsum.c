#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%li", &(arr[i]));
    }

    long int sum;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%li", sum);
    return 0;
}
