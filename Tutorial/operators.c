#include <stdio.h>

    /* İşlem Sırası:
    tekli operatörler: (+) (-) (+x, -x)  1.öncelik - kendi aralarında sağdan sola
    ikili operatörler: * / %  2.öncelik - kendi aralarında soldan sağa
    ikili operatörler: + -  3. öncelik - kendi aralarında soldan sağa

    Parantez içleri her zaman ilk önce yapılır.

    Matematikle aynı!
    */
    
    /* Atamalar
    degisken (variable) = ifade (expression)
    int x = 15;
    int y = 7;
    x = y; ------> y'nin değeri x'e atanıyor
    y = x+1; -------> x'in değeri 1 arttırılıp hesaplanıyor ve y'ye atanıyor.

    x = x+1
    Atama durumunda ilk önce sağ taraf hesaplanır, sonra sol taraftaki değişkene atanır.
    */

    /* Artırma, Azaltma İşlemleri
    i = i+1
    Bunun eşiti aynı zamanda i += 1

    i'yi artırmak için C'de i++ ve ++i ifadeleri bulunur.
    postfix: i++
    prefix: ++i
    Arasındaki fark:
    int i = 4;
    printf("%d", i++);
    Ekrana 4 değerini bastırır. Çünkü bu ifade postfix halinde. i'nin artırmadan önceki halini yazdırıp bir sonraki satırda i'yi bir artırıyor.
    printf("%d", i++);
    Ekrana 5 değerini bastırır. Çünkü bu ifade prefix halinde. İlk önce i'yi bir artırıp sonra ekrana yazdırmak için i'nin artmış halini kullanıyor.

    i-- ve --i de aynı şekildedir.
    */

    /* İç İçe Atamalar
    i = j = k = 0;
    Bu şekilde bir atama varsa en sağdan başlayarak k = 0 atıyor. j'ye k'nın değerini atıyor (j = 0). i'ye j'nin değerini atıyor (i = 0).
    Atamalar sonucunda:
    i = 0;
    j = 0;
    k = 0;
    */

int main() {

    printf("%d\n", 2-3+4);
    printf("%d\n", 2*3-4);
    printf("%d\n", 2-3/4);
    printf("%d\n", 2+3%4);
    printf("%d\n", 2/3*4);
    printf("%d\n", 2%3/4);
    printf("%d\n", -2+3);
    printf("%d\n", 2*-3);
    printf("%d\n", -2*-3);
    printf("%d\n", (2+3)%4);

    printf("---------------\n");
    
    int x = 4;
    int y = 7;
    int z = 10;
    x = y;
    y = z + x;
    printf("%d %d\n", x, y);

    int a = 5;
    int b = 6;
    int c = 7;
    printf("%d %d %d\n", a++, ++b, --c);
    printf("%d", a);

    return 0;
}