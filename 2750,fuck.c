#include <stdio.h>

int main() {

    int i;
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for (i = 0; i < 16; i++)
        printf("|     %2i    |   %2o    |       %X       |\n", i, i, i);

    printf("---------------------------------------\n");

    return 0;
}
