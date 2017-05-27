#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max_value = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        if (t > max_value) {
            max_value = t;
            max_count = 1;
        } else if (t == max_value) {
            max_count++;
        }
    }

    printf("%d\n", max_count);
    return 0;
}
