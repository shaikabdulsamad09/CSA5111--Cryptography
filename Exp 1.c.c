#include <stdio.h>

int main() {
    char text[100];
    int shift;

    printf("Enter a word (no spaces): ");
    scanf("%s", text);

    printf("Enter shift number: ");
    scanf("%d", &shift);

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            text[i] = (c - 'a' + shift) % 26 + 'a';
        } 
        else if (c >= 'A' && c <= 'Z') {
            text[i] = (c - 'A' + shift) % 26 + 'A';
        }
    }

    printf("Encrypted message: %s\n", text);

    return 0;
}