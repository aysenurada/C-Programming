#include <stdio.h>
#include <stdlib.h>

    // scanf() fonksiyonunda kullandığımız & işareti, değişkenin adres bilgisini verir.
    // pointer'lar adresini tuttuğu değişkenin veri tipiyle aynı olmalıdır.
    // %u, pointer'ın tuttuğu adresi yazdırmak için kullanılan format belirleyicidir.
    // * işareti adresteki değeri verir.

int main() {

    int i = 5;
    // pointer tanımladık
    int *p = &i;

    // pointer'ın işaret ettiği adresi yazdırır
    printf("%u\n", p);
    // pointer'ın işaret ettiği adresteki veriyi yazdırır
    printf("%d", *p);


    return 0;
}