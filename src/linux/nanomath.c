/*

Nanomath (v1.3) / July 17, 2023 - created and developed by Cyril John Magayaga

------------------------------------------------------------------------------

Copyright (c) Cyril John Magayaga. All rights reserved.

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.

*/
#include <stdio.h>
#include <math.h>  
#include <stdlib.h>
#include "color.c"
#include "decimal.c"
#include "nanomath_title.c"

int main() {
    char nanomath;
    double num1, num2, result;
    int decimal;
    
    nanomath_title();
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
            printf("Enter the angle in radians (cot): ");
            scanf("%lf", &num1);
            double cotangent(double num1) {
                return 1.0 / tan(num1);
            }
            double result = cotangent(num1);
            green();
            printf("Cotangent of %lf = %lf\n", num1, result);
            resetColor();
            break;

        case '5':
            printf("Enter operand (log): ");
            scanf("%lf", &num1);
            result = log10(num1);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;

        case '6':
            printf("Enter base and exponent (pow): ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            green();
            printf("%lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '7':
            printf("Enter an number (square root): ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            green();
            printf("square root of %lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '8':
            printf("Enter an number (cube root): ");
            scanf("%lf", &num1);
            result = cbrt(num1);
            green();
            printf("square root of %lf = %lf\n", num1, result);
            resetColor();
            break;

        case '9':
            printf("Enter an number (exponentiation): ");
            scanf("%lf", &num1);
            result = exp(num1);
            green();
            printf("exponential of %lf = %lf\n", num1, result);
            resetColor();
            break;
        
        case '0':
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
            printf("(v1.3) / July 17, 2023\n");
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