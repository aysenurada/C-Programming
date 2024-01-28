#include <stdio.h>
#include <stdlib.h>

struct Ogrenci {
    char isim[20];
    char soyisim[20];
    int numara;
};

int main() {
    
    struct Ogrenci ogrenciler[3];
    int i;
    for (i=0; i<3; i++) {
        printf("%d. ogrencinin bilgilerini giriniz: ",i+1);
        scanf("%s %s %d", &ogrenciler[i].isim, &ogrenciler[i].soyisim, &ogrenciler[i].numara);
    }
    printf("-------------------------------------\n");
    for (i=0; i<3; i++) {
        printf("%d. ogrencinin bilgileri: %s %s %d\n", i+1, ogrenciler[i].isim, ogrenciler[i].soyisim, ogrenciler[i].numara);
    }

    return 0;
}