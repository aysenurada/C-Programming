#include <stdio.h>

    /*
    while (kosul) {
        yapılacak işlemler;

        artırma işlemi;
    }
    */
    
    // artırma işlemi olmazsa döngü, sonsuz döngüye girer.

int main() {

    int i = 0;

    while (i < 10) {
        printf("i'nin degeri %d\n", i);
        i++;
    }
    printf("Dongu bitti ve dongu disina cikildi.");

    return 0;
}