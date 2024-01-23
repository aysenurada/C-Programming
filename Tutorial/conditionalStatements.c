#include <stdio.h>

    /* Koşullu Durumlar
    if (koşul) {
        yapılacak işlemler;
    }
    else if (koşul) {
        if şartı sağlanmadığında yapılacak işlemler;
    }
    else {
        if ve else if şartları sağlanmadığında yapılacak işlemler;
    }
    */

int main() {

    int vize, final;
    float ort, gano;

    printf("Vize Notu: ");
    scanf("%d", &vize);
    printf("Final Notu: ");
    scanf("%d", &final);
    printf("Universite Ortalamaniz: ");
    scanf("%f", &gano);
    
    ort = (vize * 0.4) + (final * 0.6);

    if (ort >= 50) {
        if (final >= 50) {
            printf("Dersten gectiniz.");
        }
    }
    else if (final < 50) {
        printf("Butunleme sinavina kaldiniz.");
    }
    else if (gano < 2.80) {
        printf("Ders tekrari yapmalisiniz.");
    }
    else {
        printf("Dersi almadiniz.");
    }

    return 0;
}