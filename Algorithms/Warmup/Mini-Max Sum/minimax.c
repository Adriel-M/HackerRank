#include <stdio.h>
#include <limits.h>

int main() {
    int min_value = INT_MAX;
    int max_value = INT_MIN;
    long int sum = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        scanf("%d", &n);
        sum += n;
        if (n > max_value) {
            max_value = n;
        }
        if (n < min_value) {
            min_value = n;
        }
    }

    printf("%li %li\n", sum - max_value, sum - min_value);

    return 0;
}
