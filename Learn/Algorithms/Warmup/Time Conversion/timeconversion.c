#include <stdio.h>
#include <string.h>

int main() {
    int hours;
    int minutes;
    int seconds;
    char section[3];

    scanf("%d:%d:%d%2s", &hours, &minutes, &seconds, section);

    if (strcmp(section, "PM") == 0 && hours != 12) {
        hours += 12;
    } else if (strcmp(section, "AM") == 0 && hours == 12) {
        hours = 0;
    }

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
