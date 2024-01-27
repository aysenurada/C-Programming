#include <stdio.h>
#include <stdlib.h>

int main() {

    char yazi[] = "tura";
    char *p = yazi;
    printf("%s\n", yazi);
    printf("%s\n", p);   // yukarıdaki ile aynı
    printf("%s\n", p+1);

    return 0;
}