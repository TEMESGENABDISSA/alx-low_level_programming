      AUTHOR : TEMESGEN ABDISSA

      DATE : APRIL 06  2023

            C - Bit manipulation

C - Bit manipulation refers to the process of manipulating individual bits or groups of bits within a data word in the C programming language. In C, bits are the smallest unit of information that can be manipulated, and bitwise operations are used to manipulate them.

Bit manipulation operations are useful when working with low-level hardware programming, device driver development, encryption, and other applications that require fine-grained control over data. Some common bit manipulation operations in C include bitwise AND, OR, XOR, NOT, shift left, and shift right.

Bitwise AND, OR, XOR, and NOT operations are used to perform logical operations on the individual bits of two operands. Bitwise shift operations, on the other hand, are used to shift the bits of a value left or right by a specified number of positions.

C also provides a set of bitwise assignment operators that can be used to perform bitwise operations on a variable and assign the result back to the same variable. For example, the bitwise OR assignment operator '|=' can be used to set one or more bits of a variable.

                Given Tasks Depend on the c-bit manipulation

0. 0
    0-binary_to_uint.c: C function that converts a binary number to an unsigned int.
    The parameter b is a pointer to a string of 0 and 1 characters.
    If b is NULL or there are one or more characters in b that are not 0 or 1 - returns 0.
    Otherwise - returns the converted number.

1. 1
    1-print_binary.c: C function that prints the binary representation of a number.

2. 10
    2-get_bit.c: C function that returns the value of a bit at a given index.
    Indices start at 0.
    If an error occurs - returns -1.
    Otherwise - returns the value of the bit at the given index.

3. 11
    3-set_bit.c: C function that sets the value of a bit at a given index to 1.
    If an error occurs - returns -1.
    Otherwise - returns 1.

4. 100
    4-clear_bit.c: C function that sets the value of a bit at a given index to 0.
    If an error occurs - returns -1.
    Otherwise - returns 1.

5. 101
    5-flip_bits.c: C function that returns the number of bits needed to be flipped to get from one number to another.

6. Endianness
    100-get_endianness.c: C function that checks the endianness.
    If big-endian - returns 0.
    If little-endian - returns 1.

7. Crackme3
    101-password: File containing the password for the crackme3 executable.
