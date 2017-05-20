#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 1 || (n >= 6 && n <= 20)) {
        printf("Weird\n");
    } else {
        printf("Not Weird\n");
    }

    return 0;
}
