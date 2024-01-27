#include <stdio.h>
#include <stdlib.h>

int main() {

    char *gunler[7] = {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
    printf("%s\n", gunler[1]);
    printf("%u", gunler);

    return 0;
}