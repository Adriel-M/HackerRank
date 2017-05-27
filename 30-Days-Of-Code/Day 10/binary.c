#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max_streak = 0;
    int curr_streak = 0;

    while (n) {
        if (n % 2) {
            curr_streak++;
            if (curr_streak > max_streak) {
                max_streak = curr_streak;
            }
        } else {
            curr_streak = 0;
        }
        n >>= 1;
    }

    printf("%d\n", max_streak);

    return 0;
}
