#include <stdio.h>

    /*
    do {
        işlemler;
    } while (koşul);
    */
    
    // koşul doğru olmasa bile döngü bir kez çalışır.

int main() {

    int i = 0;

    do {
        printf("i rakami 0 olmadigi icin yazdirdik.");
    } while (i != 0);

    return 0;
}