#include <stdio.h>
#include <ctype.h>

int isValidString(const char *input) {
    while (*input) {
        if (!isalnum(*input)) {
            return 0;  // Not a valid string
        }
        input++;
    }
    return 1;  // Valid string
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);

    if (isValidString(input)) {
        printf("Valid string!\n");
    } else {
        printf("Not a valid string!\n");
    }

    return 0;
}