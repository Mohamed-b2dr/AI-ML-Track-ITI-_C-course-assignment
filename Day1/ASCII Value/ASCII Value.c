#include <stdio.h>

int main() {

    char c;

    printf("Enter a character: ");
    // Read a character from user
    scanf("%c", &c);

    // %d displays the ASCII value of a character
    // %c displays the character
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
