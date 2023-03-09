# The C programming language

## C data types

int - integer (depends on system it could be 16-bit or 32-bit)
float - floating point number
char - character, a single byte
short - short integer
long - long integer
double - double-precision floating point

## Compiler flags

Use 
```console
cc [options] files
```
to compile .c file

- o option
```console
cc example.c -o examp_out
```
create an executable file with specified name

- Wall option: check for all errors and warnings in the program
- w option: suppress all the warnings
- g option: create a debugging version of the executable output file

## Printing options

- %d print as decimal integer
- %6d print as decimail integer at least 6 characters wide
- %f print as floating point
- %6f print as floating point, at least 6 characters wide
- %.2f print as floating point, 2 characters after decimal point
- %6.2f print as floating point, at least 6 wide and 2 after decimal point
