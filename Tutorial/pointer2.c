#include <stdio.h>
#include <stdlib.h>

int main() {
    // int tipinde i ve j değişkenleri oluşturuldu, j'ye 1 değeri atandı.
    int i, j=1;
    // jp1 ve jp2 pointer'ları oluşturuldu, jp2 pointer'ına j'nin adresi verildi.
    int *jp1, *jp2 = &j;
    // jp1 pointer'ına jp2 pointer'ının tuttuğu adres atandı, jp1 ve jp2 pointer'ı aynı adresi işaret ediyor, yani j değişkeninin adresini.
    jp1 = jp2;
    // i değişkenine jp2 pointer'ının tuttuğu adresteki değer 1 artırılarak atandı.
    i = ++(*jp2);
    // i = 2 oldu ve prefix ++'dan dolayı jp2 pointer'ının tuttuğu adresteki değer de 1 artırıldı sonraki satırda.
    // jp2 pointer'ının tuttuğu adrese jp1 pointer'ının tuttuğu adresteki değer i ile toplanarak atandı.
    *jp2 = *jp1 + i;

    printf("i = %d\nj = %d\n*jp1 = %d\n*jp2 = %d", i, j, *jp1, *jp2);
    /* Çıktı:
    i = 2
    j = 4
    *jp1 = 4
    *jp2 = 4
    */

    return 0;
}