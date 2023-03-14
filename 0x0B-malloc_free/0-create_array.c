#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * this task is done by temesgen abdissa
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c) 
{
    if (size == 0) {
        return NULL;
    }
    char *array = malloc(size * sizeof(char));
    if (array != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            array[i] = c;
        }
    }
    return array;
}
