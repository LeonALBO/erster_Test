#include <stdio.h>

int leet(char Wort[10], int len, char letter, int hits) {
    for (int i = 0; i < len; i++) {
    if (Wort[i] == letter) {
        Wort[i] = letter;
        hits++;
        }
    }
    return 0;
}

int main() {

    char Wort[10];
    int len = sizeof(Wort) - 1;
    char letter = 'e';
    int hits = 0;

    printf("Gibt einen Text ein: ");
    scanf(" %10c", Wort);

    leet(Wort, len, letter, hits);

    for (int i = 0; i < len; i++) {
        printf("%c", Wort[i]);
    }

    return 0;
}