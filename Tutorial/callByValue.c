#include <stdio.h>
#include <stdlib.h>

// a ve b değişkenleri fonksiyon çalıştığı sürece vardır.
// Bu fonksiyonda sadece değerler kopyalandı. Buna call by value deniyor.
void degerDegistir(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a= %d\nb = %d", a, b);
}

int main() {

    int x=5, y=10;
    degerDegistir(x,y);
    printf("x = %d\ny = %d", x, y);
    // program bittiğinde x ve y değişkenleri değişmeyecek.

    return 0;
}