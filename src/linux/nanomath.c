#include <stdio.h>
#include <math.h>  
#include <stdlib.h>
#include "color.c"
#include "decimal.c"

int main() {
    char nanomath;
    double num1, num2, result;
    int decimal;
    

    printf("                                 ._(+-*/)_.\n"); 
    white(); printf("----------------------------------"); resetColor(); purple(); printf("NANOMATH"); resetColor(); white(); printf("----------------------------------\n"); resetColor();
    printf("(+) Addition             (-) Subtraction             (*) Multiplication\n");
    printf("(/) Division             (1) Sin                     (2) Cos\n");
    printf("(3) Tan                  (4) Log                     (5) Pow\n");
    printf("(6) Square Root          (7) Cube Root               (8) Exponentiation\n");
    printf("(9) Decimal to Binary\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    printf("(h) Help                 (c) Copyright               (v) Version\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    yellow();
    printf("Make a choice: ");
    resetColor();
    scanf("%c", &nanomath);

    switch(nanomath) {
        case '+':
            printf("Enter two operands (addition): ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            green();
            printf("%lf + %lf = %lf\n", num1, num2, result);
            resetColor();
            break;

        case '-':
            printf("Enter two operands (subtraction): ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            green();
            printf("%lf - %lf = %lf\n", num1, num2, result);
            resetColor();
            break;

        case '*':
            printf("Enter two operands (multiplication): ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            green();
            printf("%lf * %lf = %lf\n", num1, num2, result);
            resetColor();
            break;

        case '/':
            printf("Enter two operands (division): ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0) {
                red();
                printf("Error: Division by zero");
                resetColor();
            }
            else {
                result = num1 / num2;
                green();
                printf("%lf / %lf = %lf\n", num1, num2, result);
                resetColor();
            }
            break;

        case '1':
            printf("Enter angle in degrees (sin): ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180);
            green();
            printf("%lf = %lf\n", num1, result);
            break;

        case '2':
            printf("Enter angle in degrees (cos): ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;

        case '3':
            printf("Enter angle in degrees (tan): ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;

        case '4':
            printf("Enter operand (log): ");
            scanf("%lf", &num1);
            result = log10(num1);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;

        case '5':
            printf("Enter base and exponent (pow): ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '6':
            printf("Enter an number (square root): ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            green();
            printf("square root of %lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '7':
            printf("Enter an number (cube root): ");
            scanf("%lf", &num1);
            result = cbrt(num1);
            green();
            printf("square root of %lf = %lf\n", num1, result);
            resetColor();
            break;

        case '8':
            printf("Enter an number (exponentiation): ");
            scanf("%lf", &num1);
            result = exp(num1);
            green();
            printf("exponential of %lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '9':
            printf("Enter an number (decimal number): ");
            scanf("%d", &decimal);
            green();
            decimalToBinary(decimal);
            resetColor();
            break;

        case 'q':
            exit(0);
            break;
        
        case 'v':
        case 'V':
            blue();
            printf("(v1.2) / July 15, 2023\n");
            printf("Nanomath was created and developed by Cyril John Magayaga\n");
            resetColor();
            yellow();
            printf("Operating System: Linux\n");
            resetColor();
            break;
        
        case 'c':
        case 'C':
            blue();
            printf("Copyright 2023 Cyril John Magayaga\n");
            resetColor();
            break;
        
        case 'h':
        case 'H':
            printf("Global options:\n");
            printf("h          Help\n");
            printf("c          Copyright\n");
            printf("v          Version\n");
            printf("q          Quit/Exit\n");
            break;

        default:
            red();
            printf("Error: Invalid operator\n");
            resetColor();
    }
    return 0;
}