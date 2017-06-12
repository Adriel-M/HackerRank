#include <stdio.h>

int fineCost(int returnDay, int returnMonth, int returnYear,
             int dueDay, int dueMonth, int dueYear) {
    if ((returnYear < dueYear) | (returnYear <= dueYear
            && returnMonth <= dueMonth \
            && returnDay <= dueDay)) {
        return 0;
    } else if (returnYear == dueYear && returnMonth == dueMonth) {
        return 15 * (returnDay - dueDay);
    } else if (returnYear == dueYear) {
        return 500 * (returnMonth - dueMonth);
    } else {
        return 10000;
    }
}

int main() {
    int rD, rM, rY;
    int dD, dM, dY;
    scanf("%d %d %d", &rD, &rM, &rY);
    scanf("%d %d %d", &dD, &dM, &dY);
    printf("%d\n", fineCost(rD, rM, rY, dD, dM, dY));
    return 0;
}
