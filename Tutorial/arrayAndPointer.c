#include <stdio.h>
#include <stdlib.h>

int main() {

    int sayilar[5] = {1, 2, 3, 4, 5};
    // direkt p pointer'ına sayilar array'inin başlangıç adresini atadık.
    int *p = sayilar;
    printf("%u\n", p);
    
    // Pointer Aritmetiği
    printf("%u\n", p+1);    // yukarıdaki adresten 4 byte sonraki adresi verecek

    printf("%d\n", *(p+1));  // sayilar[1] değerini verecek
    // bunu böyle yazmak yerine aşağıdaki gibi yazmak daha iyidir
    printf("%d\n", p[1]);   // sayilar[1] değerini verecek

    return 0;
}