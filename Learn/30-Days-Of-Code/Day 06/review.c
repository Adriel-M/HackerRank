#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a = 0;
        int b = 0;
        // The restriction was the string was up to 10000 characters
        char word[10001];
        scanf("%10000s", word);
        int word_length = strlen(word);
        char evens[word_length + 2];
        char odds[word_length + 2];
        for (int j = 0; j < word_length; j++) {
            if (j % 2 == 0) {
                evens[a] = word[j];
                a++;
            } else {
                odds[b] = word[j];
                b++;
            }
        }
        evens[a] = '\0';
        odds[b] = '\0';
        printf("%s %s\n", evens, odds);
    }

    return 0;
}
