# Nanomath - It is the scientific calculator!
#
# Copyright 2023 Cyril John Magayaga
#
# ------------------------------------------------------------------------------
#
# Copyright (c) Cyril John Magayaga. All rights reserved.
# 
# MIT License
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the “Software”), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

nanomath:
        cp src/linux/color.c src/color.c
        cp src/linux/decimal.c src/decimal.c
        cp src/linux/nanomath.c src/nanomath.c
        cp src/linux/nanomath_title.c src/nanomath_title.c
        gcc src/nanomath.c -o nanomath -lm
        rm src/color.c
        rm src/decimal.c
        rm src/nanomath.c
        rm src/nanomath_title.c
