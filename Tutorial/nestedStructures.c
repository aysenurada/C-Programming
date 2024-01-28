#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// strcpy() fonksiyonu için dahil ettik

struct Adres {
    char mahalle[15];
    char cadde[20];
    char sokak[15];
};

struct Ogrenci {
    char isim[15];
    char soyisim[15];
    int numara;
    int yas;
    // İç içe struct
    struct Adres adres;
};

int main() {
    struct Ogrenci ogr1;
    strcpy(ogr1.isim, "Burak");
    strcpy(ogr1.soyisim, "Baltaci");
    // ogr1.isim = "Burak"; şeklinde char değişkenleri atayamadığımız için strcpy() fonksiyonunu kullandık.
    ogr1.numara = 153;
    ogr1.yas = 24;
    strcpy(ogr1.adres.mahalle, "Bahcelievler");
    strcpy(ogr1.adres.cadde, "7.Cadde");
    strcpy(ogr1.adres.sokak, "1032.Sokak");

    printf("%s %s %d %d %s %s %s", ogr1.isim, ogr1.soyisim, ogr1.numara, ogr1.yas, ogr1.adres.mahalle, ogr1.adres.cadde, ogr1.adres.sokak);

    return 0;
}