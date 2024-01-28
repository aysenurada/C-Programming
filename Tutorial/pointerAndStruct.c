#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    char isim[20];
    char soyisim[20];
    int numara;
};

int main() {

    struct Ogrenci ogr;
    struct Ogrenci *ogrP;

    strcpy(ogr.isim, "Buse");
    strcpy(ogr.soyisim, "Cetin");
    ogr.numara = 157;

    ogrP = &ogr;

    printf("%s %s %d\n", ogr.isim, ogr.soyisim, ogr.numara);
    // pointer kullanarak bu şekilde de yazdırabiliriz.
    printf("%s %s %d", ogrP->isim, ogrP->soyisim, ogrP->numara);

    return 0;
}