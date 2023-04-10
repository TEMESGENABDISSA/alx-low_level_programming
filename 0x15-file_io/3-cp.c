#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits with the given code
 * @code: the exit code
 * @msg: the error message to print
 */
void error_exit(int code, char *msg)
{
        dprintf(STDERR_FILENO, "%s\n", msg);
        exit(code);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
        int fd_from, fd_to, rcount, wcount;
        char buffer[BUFFER_SIZE];

        if (argc != 3)
                error_exit(97, "Usage: cp file_from file_to");

        fd_from = open(argv[1], O_RDONLY);
        if (fd_from < 0)
                error_exit(98, "Error: Can't read from file");

        fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        if (fd_to < 0)
                error_exit(99, "Error: Can't write to file");

        do {
                rcount = read(fd_from, buffer, BUFFER_SIZE);
                if (rcount < 0)
                        error_exit(98, "Error: Can't read from file");

                wcount = write(fd_to, buffer, rcount);
                if (wcount < 0)
                        error_exit(99, "Error: Can't write to file");

        } while (rcount > 0);

        if (close(fd_from) < 0)
                error_exit(100, "Error: Can't close fd");

        if (close(fd_to) < 0)
                error_exit(100, "Error: Can't close fd");

        return (0);
}

