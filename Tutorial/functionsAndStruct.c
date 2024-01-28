#include <stdio.h>
#include <stdlib.h>

struct Ogrenci {
    char isim[20];
    char soyisim[20];
    int numara;
};

void yazdir(struct Ogrenci ogr) {
    printf("Ogrencinin Bilgileri: %s %s %d\n", ogr.isim, ogr.soyisim,ogr.numara);
}

struct Ogrenci veriAl(){
    struct Ogrenci yeniOgr;
    printf("Ogrenci Bilgilerini Girin: ");
    scanf("%s %s %d", &yeniOgr.isim, &yeniOgr.soyisim, &yeniOgr.numara);

    return yeniOgr;
}

int main() {
    
    struct Ogrenci ogr1 = {"Ahmet", "Kaya", 155};
    yazdir(ogr1);

    struct Ogrenci ogr2 = veriAl();
    yazdir(ogr2);

    return 0;
}