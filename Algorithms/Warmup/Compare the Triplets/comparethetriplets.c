#include <stdio.h>

int main() {
    int scores[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &(scores[i][j]));
        }
    }

    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (scores[0][i] == scores[1][i]) {
            continue;
        } else if (scores[0][i] > scores[1][i]) {
            alice += 1;
        } else {
            bob += 1;
        }
    }

    printf("%d %d\n", alice, bob);
    return 0;
}
