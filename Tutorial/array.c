#include <stdio.h>

int main() {

    // Aynı veri tipinde olan değerleri birlikte tutmaya yarayan yapı
    int sayilar[] = {1, 2, 3, 4, 5};
    int i;

    for (i=0; i < 5; i++) {
        printf("%d index'teki eleman %d\n", i, sayilar[i]);
    }

    return 0;
}