#include <stdio.h>
#include <stdlib.h>

// C dili karakter dizilerinin sonuna dizinin bittiğini anlamak için otomatik olarak kendisi '\0' null karakterini koyar.
// Fonksiyona karakter dizisini parametre olarak verirken boyut belirtmiyoruz.

int uzunluk(char isimParametre[]) {
    int uzunluk = 0, i;
    for (i=0; isimParametre[i] != '\0'; i++) {
        uzunluk++;
    }
    return uzunluk;
}

int main() {

    char isim[] = "Mustafa";

    printf("%d", uzunluk(isim));

    return 0;
}