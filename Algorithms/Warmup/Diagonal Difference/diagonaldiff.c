#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int values[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &(values[i][j]));
        }
    }
    int first = 0;
    int second = 0;

    for (int i = 0; i < n; i++) {
        first += values[i][i];
        second += values[i][(n - 1) - i];
    }

    int diff = first - second;

    // Get absolute values
    if (diff < 0) {
        diff *= -1;
    }

    printf("%d\n", diff);

    return 0;

}
