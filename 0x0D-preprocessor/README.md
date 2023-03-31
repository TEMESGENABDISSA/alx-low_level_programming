           AUTHOR : TEMESGEN ABDISSA
           
           DATE : MARCH 20 / 2023
           
           description abour c- preprocessor


In C programming language, the preprocessor is a program that processes the source code before the actual compilation. The preprocessor is responsible for handling the preprocessor directives, which are special instructions that are processed before the code is compiled.

Some of the commonly used preprocessor directives in C are:

#include: Used to include header files in the code.
#define: Used to define macros or constants.
#ifdef, #ifndef, #else, #endif: Used to conditionally compile code based on whether a particular macro is defined or not.
#pragma: Used to provide additional information to the compiler.
The preprocessor can be useful in several ways, such as:

Code reusability: The #include directive can be used to include header files that contain code that can be reused in multiple programs.
Code optimization: Macros defined using the #define directive can be used to reduce code duplication and improve code readability.
Platform independence: The preprocessor directives can be used to write platform-independent code that can be compiled on different platforms without modification.
However, excessive use of preprocessor directives can also make the code difficult to understand and maintain. Therefore, it is important to use preprocessor directives judiciously and only when necessarry.

       TASKS DEPEND ON TH C- preprocessor 

0. Object-like Macro
    0-object_like_macro.h: Header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. Pi
    1-pi.h: Header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. File name
    2-main.c: C program that prints the name of the file it was compiled from followed by a new line.

3. Function-like macro
    3-function_like_macro.h: Header file that defines a function-like macro ABS(x) that computes the absolute value of a number x.

4. SUM
    4-sum.h: Header file that defines a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
