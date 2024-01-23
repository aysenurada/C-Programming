#include <stdio.h>

    /* Switch Case
    switch (kontrol edilecek durum) {
        case durum:
            işlemler;
            break;
        case durum:
            işlemler;
            break;
        .
        .
        .
        default:
            case'ler sağlanmadıysa yapılacak işlemler;
            break;
    }
    */
    
    // break ifadesi kullanılmazsa program her case içerisine girer.

int main() {

    int gun;

    printf("Gun numarasi girin: ");
    scanf("%d", &gun);

    switch (gun) {
        case 1:
            printf("Pazartesi");
            break;
        case 2:
            printf("Sali");
            break;
        case 3:
            printf("Carsamba");
            break;
        case 4:
            printf("Persembe");
            break;
        case 5:
            printf("Cuma");
            break;
        case 6:
            printf("Cumartesi");
            break;
        case 7:
            printf("Pazar");
            break;
        default:
            printf("Gecersiz sayi girdiniz.");
            break;
    }

    return 0;
}