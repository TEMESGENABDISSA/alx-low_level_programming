          description 
  what is C - Static libraries ?
 

 Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
 This last comment seems obvious, as we already know that object files are also used only during the linking phase, and are not required during runtime - only the program's executable file is needed in order to run the program.

In this project, I learned what static libraries are and practiced creating and using them with ar, ranlib, and nm.
The command used The basic tool used to create static libraries is a program called 'ar', to create or update the index is called 'ranlib'

        Tasks 
0. A library is not a luxury but one of the necessities of life

    libmy.a: C Static library containing all the functions listed below:
        int _putchar(char c);
        int _islower(int c);
        int _isalpha(int c);
        int _abs(int n);
        int _isupper(int c);
        int _isdigit(int c);
        int _strlen(char *s);
        void _puts(char *s);
        char *_strcpy(char *dest, char *src);
        int _atoi(char *s);
        char *_strcat(char *dest, char *src);
        char *_strncat(char *dest, char *src, int n);
        char *_strncpy(char *dest, char *src, int n);
        int _strcmp(char *s1, char *s2);
        char *_memset(char *s, char b, unsigned int n);
        char *_memcpy(char *dest, char *src, unsigned int n);
        char *_strchr(char *s, char c);
        unsigned int _strspn(char *s, char *accept);
        char *_strpbrk(char *s, char *accept);
        char *_strstr(char *haystack, char *needle);

    main.h: Header file containing the prototypes of all functions included in libmy.a.

1. Without libraries what have we? We have no past and no future
    create_static_lib.sh: Bash script that creates a static library called liball.a from all the .c files in the current directory.
