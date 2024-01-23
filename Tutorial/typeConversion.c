#include <stdio.h>

    /* Tip Dönüşümleri
    Otomatik Dönüşümler
    Örneğin bir aritmetik ifadede bütün tipler aynı değil. Mesela 3.2/2 dediğimizde float ve int beraber hesaplanıyor. Burada sonuç 1.6
    olacak. Çünkü otomatik bir dönüşüm yapılıyor. (2 sayısı float'a dönüştürülüp 2.0 oluyor.)

    Otomatik Dönüşüm Çizelgesi:
    char
    short ---------> int ---------> float ---------> double ---------> long
                                                                       double
    Sağa doğru öncelik artıyor.

    Mesela int ve double beraber hesaplanacaksa tüm değerler double veri tipine otomatik dönüştürülür.

    Manuel Dönüşümler
    Otomatik dönüşümlerin olmadığı yerlerde kendimiz dönüşüm yapabiliriz.

    3.2 sayısını int yapmak istersek ------> (int)3.2 ------> 3 sonucunu verir (kesirli kısmı atar).
    */
   
int main() {

    
    int x = 2;
    float y = 1.2;
    printf("%.1f\n", x/y);

    printf("%.2f\n", 2*4.2+4%2);
    printf("%.2f\n", 12.5/2);
    printf("%d\n", (int)3.2);
    printf("%.1f", (float)3);

    return 0;
}