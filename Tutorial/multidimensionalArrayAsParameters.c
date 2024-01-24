#include <stdio.h>
#include <stdlib.h>

// Çok boyutlu array'lerde ilk boyutu bizim vermemiz gerekiyor, ikinci boyutu ise içine yazıyoruz aşağıdaki gibi
void yazdir(int matrisParametre[][4], int size) {
    int i, j;
    for (i=0; i<size; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", matrisParametre[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int matris[3][4];
    int i, j;

    printf("Matrisin degerlerini giriniz: ");

    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    yazdir(matris, 3);

    return 0;
}