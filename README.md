<p align="center">
  <a href="https://github.com/Magayaga/Nanomath">
    <img src="./assets/nanomath.svg" alt="Nanomath logo" width="200" height="165">
  </a>
</p>
<h1 align="center">Nanomath</h1>

**Nanomath** (latin for Nano: Νανο) is a scientific calculator for cross-platform computing systems or operating environments using a **command line interface** or **text-based user interface** created and developed by Cyril John Magayaga.

## Getting Start

### Windows
```shell
# Download the Nanomath
git clone https://github.com/Magayaga/Nanomath.git

# Change directory the Nanomath
cd Nanomath

# Run the program
gcc src/win/nanomath.c -o nanomath.exe

# Open the application
./nanomath
```

### Linux
```shell
# Download the Nanomath
git clone https://github.com/Magayaga/Nanomath.git

# Change directory the Nanomath
cd Nanomath

# Run the program (gcc)
gcc src/linux/nanomath.c -o nanomath -lm

# or (makefile)
make

# Open the application
./nanomath
```
## License
Copyright (c) Cyril John Magayaga. All rights reserved.

Licensed under the [MIT License](LICENSE).