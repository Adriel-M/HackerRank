#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float pos = 0.0;
    float neg = 0.0;
    float zero = 0.0;
    for (int i = 0; i < n; i++) {
        int in;
        scanf("%d", &in);
        if (in == 0) {
            zero++;
        } else if (in > 0) {
            pos++;
        } else {
            neg++;
        }
    }
    printf("%.6f\n", pos / n);
    printf("%.6f\n", neg / n);
    printf("%.6f\n", zero / n);

    return 0;
}
