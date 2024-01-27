#include <stdio.h>
#include <stdlib.h>

// Call By Reference: Adres ile gönderme.
// Fonksiyona parametre olarak pointer verdik.
void degerDegistir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x=5, y=10;
    // Fonksiyona argüman olarak x ve y değişkenlerinin adres değerlerini verdik ki pointer'ların işaret ettiği adreslerdeki değerler değişebilsin.
    degerDegistir(&x,&y);
    printf("x = %d\ny = %d", x, y);
    /* Çıktı:
    x = 10
    y = 5
    */

    return 0;
}