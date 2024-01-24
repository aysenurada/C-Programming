#include <stdio.h>
#include <stdlib.h>

    /* Fonksiyon tanımlama
    donusTipi fonksiyonAdi(parametreler) {
        fonksiyon blogu
    }
    */
    
    // Geriye değer döndürmeyen fonksiyonlara void değerlidir.

void hata() {
    printf("Negatif sayi girdiniz!");
}

int main() {

    int sayi;
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0) {
        hata();
    }
    else {
        printf("Başarılı!");
    }

    return 0;
}