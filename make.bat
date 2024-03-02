@echo off

REM Set compiler and compiler options
SET CC=gcc
SET CFLAGS=-Wall -O2

REM Set source files directory
SET SRCDIR=src/win

REM Set source files
SET SOURCES=%SRCDIR%\nanomath.c %SRCDIR%\nanomath_title.c %SRCDIR%\decimal.c %SRCDIR%\binary.c %SRCDIR%\color.c %SRCDIR%\gamma.c %SRCDIR%\quadratic.c %SRCDIR%\demand.c

REM Set output file
SET OUTPUT=nanomath.exe

REM Compile and link
%CC% %CFLAGS% %SOURCES% -o %OUTPUT%

REM Check for errors
IF %ERRORLEVEL% NEQ 0 (
    echo Error: Compilation failed.
    exit /b %ERRORLEVEL%
)

echo Compilation successful.
