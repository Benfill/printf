## Printf Project

This project involves the implementation of a custom printing function that supports various conversion specifiers, flags, length modifiers, and custom conversion options. The goal is to create a flexible and feature-rich printing function similar to the standard `printf` function in C.

## Function Overview

The core function to be implemented is `_printf`, which will take a format string as its first argument, followed by any number of additional arguments corresponding to the format specifiers used in the format string. The function will produce formatted output based on the provided format string and arguments.

## Conversion Specifiers

The following conversion specifiers need to be handled:

-   `%c`: Print a single character.
-   `%s`: Print a null-terminated string.
-   `%%`: Print a literal '%' character.
-   `%d` or `%i`: Print a signed integer.
-   `%b`: Print an integer in binary format.
-   `%u`: Print an unsigned integer.
-   `%o`: Print an integer in octal format.
-   `%x`: Print an integer in lowercase hexadecimal format.
-   `%X`: Print an integer in uppercase hexadecimal format.
-   `%S`: Print a string with non-printable characters encoded as `\x` followed by their hexadecimal ASCII code.

## Flags

The following flags can be used:

-   `+`: For signed numeric conversions, print a '+' sign for positive numbers.
-   (space): If no sign is going to be written, print a space before positive values.
-   `#`: Used with `o`, `x`, and `X` conversions to print the prefix '0', '0x', or '0X' respectively.
-   `-`: Left-justify the output within the field width.

## Length Modifiers

The following length modifiers are applicable:

-   `l`: For integer conversions, the argument is a long int or unsigned long int.
-   `h`: For integer conversions, the argument is a short int or unsigned short int.

## Custom Conversion Specifiers

-   `%r`: Print the reversed string.
-   `%R`: Print the rot13'ed string.

## Field Width

The field width specifies the minimum number of characters to be printed. If the value to be printed is shorter than this width, it will be padded with spaces (or other specified characters) to reach the specified width.

## Precision

The precision specifies the number of digits to appear after the decimal point for floating-point conversions or the minimum number of digits to be printed for integer conversions.

## Implementation Details

-   Use a local buffer of 1024 characters to minimize the number of calls to the `write` function.
-   Ensure that all specified conversion specifiers, flags, length modifiers, custom conversion specifiers, field widths, and precision are correctly handled.
-   Create a man page (`printf(3)`) that documents the usage and details of the `_printf` function.

## Example Usage

`#include "custom_printf.h"


int main() {

    _printf("The value is: %d\n", 42);
    
    _printf("Hello, %s!\n", "world");
    
    return 0;
}` 

## Contributors

-   ## Anass Benfillous
-  ## Achraf Eddiba
