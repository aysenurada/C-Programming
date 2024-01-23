#include <stdio.h>

    // tekli yorum satırı

    /*
        çoklu yorum satırı
    */

    /* Değişkenler
    Temel değişkenler -> char, int, float, double, short, long

    char: 1 byte (8 bit). 0 dan 255 e kadar değer alabilir. Her bir değer ASCII tablosundaki bir değere eşdeğerdir. '' (tek tırnak) içerisinde tanımlanırlar.
    int: 4 byte (32 bit). -2^16 dan 2^16 aralığında değer alır.
    short (short int): 2 byte (16 bit). -2^8 den 2^8 aralığında değer alır. int veri tipi ile aynıdır. Sadece alacağı değer aralığı daha kısadır.
    long (long int): 8 byte (64 bit). -2^32 den 2^32 aralığında değer alır. int veri tipi ile aynıdır. Sadece alacağı değer aralığı daha geniştir.
    float: Ondalıklı sayıları tutmak için kullanılır. Kaç byte olduğu işletim sistemine göre değişebilir. 2.12, 3.14 gibi değerler alır.
    double: Ondalıklı sayıları tutmak için kullanılır. Kaç byte olduğu işletim sistemine göre değişebilir. float veri tipinden daha kapsamlıdır.
            2.1548966123487 gibi değerler için idealdir.
    bool: true (1) - false (0)
    */

    /* Değişken Tanımlama
    veri_tipi degiskenAdi;
    int sayi;
    veri_tipi degiskenAdi = deger;
    int sayi = 5;
    */

    /* Format Belirleyiciler
    %d - int değerler için
    Örnek:
    int x = 5;
    printf("%d", x); ------> ekrana 5 değerini yazdırır.

    %f - float ve double değerler için
    Örnek:
    float f = 2.14;
    double d = 4.21;
    printf("%f %f", f, d); ------> ekrana 2.14 4.21 değerlerini değişken sırasına göre yazdırır.
    %.1f virgülden sonra tek basamak alır.

    %c - char değerler için
    Örnek:
    char c = 'a';
    printf("%c", c); ------> ekrana a değerini yazdırır.
    printf("%d", c); ------> ekrana a karakterinin ASCII tablosundaki sayısal değerini yazdırır.
    %.2f virgülden sonra ilk iki basamağı alır.

    %s - karakter dizileri için
    printf("%s", "CProgramlama"); ------> ekrana CProgramlama yazdırır.
    */
   
int main() {


    int a = 15;
    char b = 66;
    char b1 = 'B';
    float f = 4.2;
    double d = 0.14;

    printf("%d\n%c\n%c\n%.1f\n%.2f\n%s\n", a, b, b1, f, d, "CProgramlama");

    // \n bir alt satırdan yazdırılmaya başlanılmasını sağlar.

    // sizeof() fonksiyonu değişkenin bellekte kapladığı alanın kaç byte olduğunu döndürür.
    printf("%d byte", sizeof(a));

    return 0;
}