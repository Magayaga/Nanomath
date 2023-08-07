# Nanomath - It is the scientific calculator!

# Copyright 2023 Cyril John Magayaga

nanomath-all: src/nanomath.c src/decimal.c src/color.c src/nanomath_title.c
	$(CC) -o nanomath src/nanomath.c -lm

src/nanomath.c: src/linux/nanomath.c
	cp src/linux/nanomath.c src/nanomath.c

src/color.c: src/linux/color.c
	cp src/linux/color.c src/color.c

src/decimal.c: src/linux/decimal.c
	cp src/linux/decimal.c src/decimal.c

src/nanomath_title.c: src/linux/nanomath_title.c
	cp src/linux/nanomath_title.c src/nanomath_title.c

clean-all:
	rm src/color.c src/decimal.c src/nanomath.c src/nanomath_title.c

nanomath:
	$(CC) -o nanomath src/linux/nanomath.c -lm

clean:
    rm nanomath 
