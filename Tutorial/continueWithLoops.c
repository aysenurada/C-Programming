#include <stdio.h>

int main() {

    // 20 'ye kadar olan çift sayıları bulup yazdıran program

    int i;

    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            printf("%d sayisi cift sayidir.\n", i);
        }
        else if (i % 2 == 1) {
            continue;
            printf("Bir sey yapilmadi.");
        }
    }
    

    return 0;
}