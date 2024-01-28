#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filep;
    char text[256];
    filep = fopen("fputs_ile_yazdirma.txt", "a");

    if (filep == NULL) {
        printf("Dosya olusturulmadi.");
    }
    else {
        printf("Bir seyler yazin: ");
        // scanf()'ten daha güvenlidir fgets(). Çünkü boşluktan sonra gelen verileri de alır.
        // fgets(yazilacak_veri, uzunlugu, standart input output);
        fgets(text, 256, stdin);
        // string'i dosyaya yazdırmak için fputs() kullanıyoruz.
        // fputs(hangi string yazilacak, hangi dosyaya yazilacak);
        fputs(text, filep);
        printf("Dosyaya yazildi.");
        fclose(filep);
    }

    return 0;
}