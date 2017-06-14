#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp(*(char **) a, *(char **) b);
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;;
    char **names = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        char *name = malloc(sizeof(char) * 21);
        char *email = malloc(sizeof(char) * 51);
        scanf("%s %s", name, email);
        char *domain = strrchr(email, '@');
        if (domain && !strcmp(domain, "@gmail.com")) {
            names[count] = name;
            count++;
        } else {
            free(name);
        }
        free(email);
    }
    qsort(names, count, sizeof(char *), cmp);
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
        free(names[i]);
    }
    free(names);
    return 0;
}
