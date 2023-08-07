#include <string.h>
#include <stdio.h>

void binaryToDecimal(const char* binary) {
    int decimal = 0;
    int length = strlen(binary);
    int base = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    green();
    printf("Decimal: %d", decimal);
    resetColor();
}
