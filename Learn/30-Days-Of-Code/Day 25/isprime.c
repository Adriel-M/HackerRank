#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    } else if (n <= 3) {
        return 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T, n;
    scanf("%d", &T);
    while (T-- > 0) {
        scanf("%d", &n);
        if (is_prime(n)) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    return 0;
}
