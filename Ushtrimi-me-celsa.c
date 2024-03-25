#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipet e funksioneve
int ndryshoCelesin(int celesi);
int hedhTopin(int celesi1, int celesi2, int celesi3, int hyrja);

int main() {
    int n, pike = 0, i;
    int celesi1 = 0, celesi2 = 0, celesi3 = 0;

    // Inicializoni gjeneratorin e numrave të rastësishëm
    srand((unsigned) time(NULL));

    printf("Shkruaj numrin e hedhjeve: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int hyrja = rand() % 2;
        pike += hedhTopin(celesi1, celesi2, celesi3, hyrja);
        celesi1 = ndryshoCelesin(celesi1);
        celesi2 = ndryshoCelesin(celesi2);
        celesi3 = ndryshoCelesin(celesi3);
    }

    printf("Totali i pikëve: %d\n", pike);

    return 0;
}

int ndryshoCelesin(int celesi) {
    if (celesi == 0) {
        return 1;
    } else {
        return 0;
    }
}

int hedhTopin(int celesi1, int celesi2, int celesi3, int hyrja) {
    int daleNgaD = 0;

    if (hyrja == 0) {
        celesi1 = ndryshoCelesin(celesi1);
        if (celesi1) {
            daleNgaD = 1;
        }
        if (celesi1 == celesi3) {
            celesi2 = ndryshoCelesin(celesi2);
        }
        celesi3 = ndryshoCelesin(celesi3);
    } else {
        celesi3 = ndryshoCelesin(celesi3);
        if (celesi3) {
            daleNgaD = 1;
        }
        if (celesi1 == celesi3) {
            celesi2 = ndryshoCelesin(celesi2);
        }
        celesi1 = ndryshoCelesin(celesi1);
    }

    if (daleNgaD && hyrja != 0) {
        return 1;
    } else {
        return 0;
    }
}