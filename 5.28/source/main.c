#include <stdio.h>
#include <ctype.h>

char changeCase(char c) {
    if (islower(c)) {
        return toupper(c);
    }
    else if (isupper(c)) {
        return tolower(c);
    }
    return c;
}

int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf(" %c", &c);
    printf("Changed case: %c\n", changeCase(c));
    return 0;
}
