#include <stdio.h>

int leet(char Wort[10], int len, char number, int hits, int counter, const int gesamtlen) {
    //Gegth durch jeden Buchtsaben rein und schaut ob mein e durch 3 ersetzen kann
    for (int i = 0; i < len; i++) {
    if (Wort[i] == number) {
        Wort[i] = number;
        hits++;
        len--;
        printf("SUCCESS");
        }
    }

    //Wenn kein him Wort ist, dann printet er die Länge des Wortes
    if (counter == 0) {
        printf(gesamtlen * -1);
        printf("Das Wort ist %d Buchstaben lang", len);
    }
    return 0;
}

int main() {

    //Variablen
    char Wort[10];
    int len = sizeof(Wort) - 1;
    char number = '3';
    int hits = 0;
    const int gesamtlen = sizeof(Wort) - 1;
    int counter = gesamtlen - len;

    //Ein Wort eingebn
    printf("Gibt einen Text ein: ");
    scanf(" %10c", Wort);

    //Funktion wird aufgerufen
    leet(Wort, len, number, hits, counter, gesamtlen);

    //Der Buchstabe oder der 3 werden geprintet
    for (int i = 0; i < len; i++) {
        printf("%c", Wort[i]);
    }

    //Die Treffer werden geprintet
    printf("Treffer: %d", hits);

    return 0;
}