/*

Nanomath (v1.5) / February 29, 2024 - created and developed by Cyril John Magayaga

------------------------------------------------------------------------------

Copyright (c) 2023 Cyril John Magayaga. All rights reserved.

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
#include "color.h"
#include "nanomath_title.h"

void nanomath_title() {
    printf("                                 ._(+-*/)_.\n"); 
    white(); printf("----------------------------------"); resetColor(); purple(); printf("NANOMATH"); resetColor(); white(); printf("----------------------------------\n"); resetColor();
    printf("(+) Addition             (-) Subtraction             (*) Multiplication\n");
    printf("(/) Division             (1) Sine                    (2) Cosine\n");
    printf("(3) Tangent              (4) Cotangent               (5) Common Logarithm\n");
    printf("(6) Pow                  (7) Square Root             (8) Cube Root\n");
    printf("(9) Exponentiation       (0) Decimal to Binary       (#) Binary to Decimal\n");
    printf("(r) Round                (e) Ceil                    (f) Floor\n");
    printf("(g) Gamma Function       (u) Quadratic Equation      (d) Demand Function\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    printf("(h) Help                 (c) Copyright               (v) Version\n");
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    blue();
    printf("Copyright (c) 2023-2024 Cyril John Magayaga\n");
    resetColor();
    white();
    printf("----------------------------------------------------------------------------\n");
    resetColor();
    yellow();
    printf("Make a choice: ");
}
