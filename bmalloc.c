#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main() {

    int* big_string = malloc(1);

    // for (int i = 0; i < 100; i++) {
    //     big_string[i] = (char) i;
    //     printf("%c \n", big_string[i]);
    // }

    *big_string = 1;

    printf("%d", *big_string);


    free(big_string);

    return 0;
}