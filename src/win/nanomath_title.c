#include <stdio.h>

void nanomath_title() {
    printf("                                 ._(+-*/)_.\n"); 
    white(); printf("----------------------------------"); resetColor(); purple(); printf("NANOMATH"); resetColor(); white(); printf("----------------------------------\n"); resetColor();
    printf("(+) Addition             (-) Subtraction             (*) Multiplication\n");
    printf("(/) Division             (1) Sine                    (2) Cosine\n");
    printf("(3) Tangent              (4) Cotangent               (5) Common Logarithm\n");
    printf("(6) Pow                  (7) Square Root             (8) Cube Root\n");
    printf("(9) Exponentiation       (0) Decimal to Binary\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    printf("(h) Help                 (c) Copyright               (v) Version\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    yellow();
    printf("Make a choice: ");
}