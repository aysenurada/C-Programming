#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
    dosya açma -> fopen("dosya_adi", "mod")
    modlar:
    w -> bulunulan dizinde dosya yoksa w, yeni dosya oluşturur ve içerisini değiştirmeyi sağlar. Dosya varsa var olanı siler, yeni dosya oluşturur ve içerisini değiştirmeye olanak verir.
    r -> dosya okumayı sağlar.
    a -> var olan dosyanın içeriğini kaybetmeden değiştirmeyi sağlar.
    w+ -> hem yazma hem de okuma izni verir.
    r+
    a+

    fclose(file pointer'ı alır parametre olarak) -> pointer'ın gösterdiği dosyayı kapatır.

    fputc(chracter, file pointer'ı) -> pointer'ın işaret ettiği dosyaya ilk parametre olan karakteri yazar.
    */


int main() {

    char veri[25] = "C Programlama";
    int uzunluk = strlen(veri);
    int i;

    FILE *fileP = fopen("c_programlama.txt", "w");

    if (fileP == NULL) {
        printf("Dosya olusturulamadi.");
    }
    else {
        for (i=0; i<uzunluk; i++) {
            fputc(veri[i], fileP);
            printf("Yazilan Karakter: %c\n", veri[i]);
        }
        printf("Dosyaya karakterler basariyla yazdirildi.");
        fclose(fileP);
    }

    return 0;
}