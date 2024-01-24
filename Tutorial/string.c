#include <stdio.h>

int main() {

    // C dilinde string veri tipi yoktur.
    // char veri tipinde bir array oluşturarak string değişkenleri oluşturabiliriz.
    // C dili, karakter dizisinin bittiğini anlamak için dizinin sonuna kendisi \0 null karakterini koyar.
    
    char isim[15];

    printf("Isminizi giriniz: ");
    scanf("%s", isim);
    // char veri tipinde & işareti kullanılmaz.
    // scanf() girilen değerde boşluk varsa boşluktan sonrasını almaz.

    printf("Isminiz: %s", isim);

    return 0;
}