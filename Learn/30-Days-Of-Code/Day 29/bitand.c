#include <stdio.h>

int max_value(int n, int k) {
    return ((k - 1) | k) <= n ? k - 1 : k - 2;
}

int main() {
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &k);
        printf("%d\n", max_value(n, k));
    }
    return 0;
}
