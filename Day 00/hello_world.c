#include <stdio.h>

int main()
{
    char input_string[256];

    scanf("%[^\n]", input_string);

    printf("Hello, World.\n");

    printf("%s\n", input_string);

    return 0;

}
