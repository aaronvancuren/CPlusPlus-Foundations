//#pragma once - https://en.wikipedia.org/wiki/Include_guard

// The header file with just the function declarations.

// Include guard prevents the same file from being pasted multiple times into another file.
#ifndef HEADER_EXAMPLE_H // Preprocessor directive - "include guard" - checks if header file has not been defined in the file already
#define HEADER_EXAMPLE_H // Preprocessor directive - "include guard" - this will define the header file if it has not been already (previous line)

// The function declarations in the header file don't need variable names, just variable types. You can put names in the declaration, however, and doing this often makes the code easier to read.
void OuterFunction(int);
void InnerFunction(int);

#endif // "include guard"