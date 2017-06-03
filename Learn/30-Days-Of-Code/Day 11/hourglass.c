#include <stdio.h>

int get_sum(int arr[6][6], int x, int y) {
    int sum = 0;
    // top section
    for(int i = 0; i < 3; i++) {
        sum += arr[y][x + i];
    }
    sum += arr[y + 1][x + 1];
    for (int i = 0; i < 3; i++) {
        sum += arr[y + 2][x + i];
    }
    return sum;
}

int main() {
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &(arr[i][j]));
        }
    }

    int curr = 0;
    int max_sum = -46;
    int max_x;
    int max_y;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int hsum = get_sum(arr, j, i);
            if (hsum > max_sum) {
                max_sum = hsum;
                max_x = j;
                max_y = i;
            }
        }
    }

    printf("%d\n", max_sum);

    return 0;

}

