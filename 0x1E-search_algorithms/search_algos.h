#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * struct listint_s - singly-linked-list
 * done by temesgen abdissa
 * @n: Int
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * Description: singly-linked-list node structure
 * for alx - Holberton project
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly-linked list with  express-lane
 * done by Temesgen Abdissa
 * @n: Int
 * @index: A Index of the node in the list
 * @next: A Pointer to the next-node
 * @express: A  Pointer to the next node in the express lane
 * Description: singly-linked-list-node structure with an express lane
 * for alx- Holberton project
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
