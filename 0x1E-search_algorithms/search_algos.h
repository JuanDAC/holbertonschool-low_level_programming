#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

skiplist_t *linear_skip(skiplist_t *list, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int my_linear_search(int *array, size_t size, int value, int index);
int my_jump_search(int *array, size_t size, int value, int index);
int binary_search(int *array, size_t size, int value);

/*
 * linear_search - searches for a value in an array of integers using the
 *                 Linear search algorithm
 *
 * @A: is a pointer to the first element of the array to search in
 * @S: is the number of elements in array
 * @V: is the value to search
 *
 * Return: the first index where value is located
 */

#define linear_search(A, S, V) my_linear_search((A), (S), (V), 0)

/*
 * jump_search - searches for a value in an array of integers using the
 *                 Jump search algorithm
 *
 * @A: is a pointer to the first element of the array to search in
 * @S: is the number of elements in array
 * @V: is the value to search
 *
 * Return: the first index where value is located
 */

#define jump_search(A, S, V) my_jump_search((A), (S), (V), 0)

/*
 * linear_search_format - string "Value checked array[%d] = [%d]\n"
 */

#define linear_search_format "Value checked array[%d] = [%d]\n"

/*
 * print_array - print items of array integers
 *
 * @ARRAY: is a pointer to the first element of the array to search in
 * @SIZE: is the number of elements in array
 *
 * Return: the first index where value is located
 */

#define print_array(ARRAY, SIZE)                           \
	do {                                                   \
		int _index = 0;                                    \
		if ((ARRAY) == NULL || (SIZE) == 0)                \
			break;                                         \
		printf("Searching in array: %d", (ARRAY)[_index]); \
		for (_index = 1; _index < (int)(SIZE); _index++)   \
			printf(", %d", (ARRAY)[_index]);               \
		printf("\n");                                      \
	} while (0)

#endif /* SEARCH_ALGOS */
