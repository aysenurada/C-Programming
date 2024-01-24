#include <stdio.h>
#include <stdlib.h>

// Array'ler kendi boyut bilgisini taşımadığı için boyut bilgisini de parametre olarak vermemiz gerekiyor.
int carp(int matris[], int size) {
    int carpim = 1;
    int i = 0;

    for (; i<size; i++) {
        carpim *= matris[i];
    }
    return carpim;
}

int main() {

    int sayilar[5] = {1, 2, 3, 4, 5};

    printf("%d", carp(sayilar, 5));

    return 0;
}