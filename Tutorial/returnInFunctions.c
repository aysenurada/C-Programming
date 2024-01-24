#include <stdio.h>
#include <stdlib.h>

int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main() {

    int sayi1, sayi2, toplam;

    printf("Birinci Sayi: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayi: ");
    scanf("%d", &sayi2);

    toplam = topla(sayi1, sayi2);
    
    printf("%d + %d = %d", sayi1, sayi2, toplam);

    return 0;
}