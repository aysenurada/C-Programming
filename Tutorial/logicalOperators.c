#include <stdio.h>

    /* Mantıksal Operatörler
    <, >, <=, >= ------> matematikteki ile aynı
    == eşit midir
    != eşit değil midir
    */

    /* Mantıksal Bağlaçlar
    && ----> and (ve)
    || ----> or (veya)
    ! ----> not (değil)

    && içeren cümlenin true olması için bütün ifadelerin true olması gerekir. Bir ifade false olursa cümle false kabul edilir.
    || içeren cümlenin true olması için bir ifadenin true olması yeterlidir. Cümlenin false olması için tüm ifadelerin false olması gerekir.
    ! -> true ifadeyi false, false ifadeyi true yapar.
    */
    
    /* Şartlı Cümleler - (Çok kullanılmıyor)
    a = x > y ? x : y;
    ? ise anlamı katıyor
    : değilse anlamı katıyor
    cümlenin tanımı --> x > y ise x olsun değilse y olsun
    */


int main () {

    int a, b = 20, c = 30;
    a = b < c ? b : c;
    printf("%d", a);

    return 0;
}