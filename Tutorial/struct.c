#include <stdio.h>
#include <stdlib.h>

// Farklı veri tiplerinde değişkenleri birlikte tutabilen yapılara struct (yapı) denir.
struct Ogrenci {
    char isim[15];
    char soyisim[15];
    int numara;
    int yas;
};

int main() {

    struct Ogrenci ogr1 = {"Ahmet", "Korkmaz", 251, 23};
    struct Ogrenci ogr2 = {"Aynur", "Malta", 154, 23};

    printf("%s %s %d %d\n", ogr1.isim, ogr1.soyisim, ogr1.numara, ogr1.yas);
    printf("%s %s %d %d", ogr2.isim, ogr2.soyisim, ogr2.numara, ogr2.yas);

    return 0;
}