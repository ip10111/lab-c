#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 100

int main() {
    char s[MAX_INPUT_LENGTH + 1];
    printf("Please input text (100 max): ");
   // +1 for null-terminating character
    fgets(s, sizeof(s), stdin);

    // Remove newline character from the input
    size_t input_length = strlen(s);
    if (input_length > 0 && s[input_length - 1] == '\n') {
        s[input_length - 1] = '\0';
    }

    printf("Hello, World!\n%s", s);

    return 0;
}
