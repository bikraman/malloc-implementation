#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main() {

    char* big_string = malloc(10);

    for (int i = 0; i < 100; i++) {
        big_string[i] = (char) i;
        printf("%c \n", big_string[i]);
    }

    free(big_string);

    return 0;
}