#include <stdio.h>

int main() {

    /* Çok boyutlu array'ler genellikle matris yapıları için kullanılır.
    1 2 3
    4 5 6
    7 8 9

    veriTipi array_ismi[satır][sütun];
    */

    int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}