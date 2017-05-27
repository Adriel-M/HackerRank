#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// start
void displayPathtoPrincess(int n, char grid[101][101]){
    int m_x, m_y;
    int p_x, p_y;

    char *directions[4] = {"UP", "DOWN", "LEFT", "RIGHT"};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'm') {
                m_x = j;
                m_y = i;
            } else if (grid[i][j] == 'p') {
                p_x = j;
                p_y = i;
            }
        }
    }
    char *horizontal = directions[3];
    if (m_x > p_x) {
        horizontal = directions[2];
    }
    char *vertical = directions[1];
    if (m_y > p_y) {
        vertical = directions[0];
    }

    for (int i = 0; i < abs(m_x - p_x); i++) {
        printf("%s\n", horizontal);
    }

    for (int j = 0; j < abs(m_y - p_y); j++) {
        printf("%s\n", vertical);
    }
}

// given
int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
