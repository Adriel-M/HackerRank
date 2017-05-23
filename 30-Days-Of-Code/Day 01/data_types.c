#include <stdio.h>

int main() {
    int i = 4;
    double d = 4.0;
    char *s = "HackerRank ";

    int j;
    double e;
    char t[256];

    scanf("%d", &j);
    scanf("%lf", &e);
    scanf("\n%[^\n]", t);

    printf("%d\n", i + j);
    printf("%0.1lf\n", d + e);
    printf("%s%s\n", s, t);

    return 0;
}
