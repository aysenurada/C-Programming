#include <stdio.h>

int main() {

    /*
    printf() ----> ekrana içerisine verilen değerleri yazdırır.
    scanf() ----> kullanıcıdan veri alır.

    scanf() de kullanılan & işareti kullanıcıdan alınan değeri değişkene atar.
    */
    
    int yas;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);
    printf("Yasiniz: %d", yas);

    return 0;
}