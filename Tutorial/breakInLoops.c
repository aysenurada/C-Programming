#include <stdio.h>

int main() {

    // Kullanıcı programdan çıkış yapana kadar girdiği sayıları toplayan program

    int sayi, toplam = 0;

    // while (1) ----> döngü şartının true olduğu anlamına gelir.
    while (1) {
        printf("Sayi giriniz - Programdan cikmak icin 0'i tuslayiniz: ");
        scanf("%d", &sayi);

        if (sayi == 0) {
            printf("Programdan cikis yapildi.\n");
            break;
        }
        toplam += sayi;
    }
    printf("Toplam: %d", toplam);
    

    return 0;
}