   AUTHOR : TEMESGEN ABDISSA
   
   DATE : MARCH 23 / 2023
   
   DESCRIPTION ABOUT C - Variadic functions

A variadic function is a function that accepts a variable number of arguments. In C, we use the <stdarg.h> header to define and manipulate such functions.
In C programming language, a variadic function is a function that takes a variable number of arguments. Variadic functions are defined using the ellipsis ... syntax.

The most commonly used variadic function in C is printf(), which takes a variable number of arguments based on the format string. Another example is the scanf() function, which also takes a variable number of arguments based on the format string.

To define a variadic function, you use the va_list type, along with the va_start(), va_arg(), and va_end() macros. The va_list type is used to declare a variable that will hold the arguments passed to the function, and the va_start() macro initializes the va_list variable. The va_arg() macro is used to retrieve the next argument from the va_list, and the va_end() macro cleans up the va_list when the function is finished.
 
            Given  Tasks depend on the c- variadic functions

0. Beauty is variable, ugliness is constant
    0-sum_them_all.c: C function that returns the sum of all its paramters.
        If the parameter n == 0, the function returns 0.

1. To be is to be the value of a variable
    1-print_numbers.c: C function that prints numbers, followed by a new line.
        The paramter separator is the string to be printed between numbers.
        The paramter n is the number of integers passed to the function.
        If separator is NULL, it is not printed.

2. One woman's constant is another woman's variable
    2-print_strings.c: C function that prints strings, followed by a new line.
        The parameter separator is the string to be printed between the strings.
        The parameter n is the number of strings passed to the function.
        If separator is NULL, it is not printed.
        If one of the strings is NULL, the function prints (nil) instead.

3. To be is a to be the value of a variable
    3-print_all.c: C function that prints anything.
        Usage: print_all("ceis", 'H', 0, "lberton");
        The paramter format is a list of types of arguments passed to the function (c:char, i:int, f:float, s:char * (if the string is NULL, (nil) is printed instead))
        Any other character is ignored.
        A new line is printed at the end of the function.

 
