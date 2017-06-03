#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

// given code
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", solveMeFirst(num1, num2));
    return 0;
}
