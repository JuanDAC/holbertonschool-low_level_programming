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
int my_linear_search(int *array, size_t size, int value, int index);
int binary_search(int *array, size_t size, int value);
int my_jump_search(int *array, size_t size, int value, int i, int to_lineal);
int my_interpolation_search(int *array, size_t size,
	int value, size_t right, size_t left
);
int my_exponential_search(int *array, size_t size, int value, int index);



/*
 * min - finds the minimum of two values
 * @A: first value to compare
 * @B: second value to compare
 * @T: type of variables
 *
 * Return: The smaller of the two values, or a if equal
 */
#define min(A, B, T) (((T)B < (T)A) ? (T)(B) : (T)(A))

/*
 * interpolation - ecuation of interpolation
 *
 * @A: is a pointer to the first element of the array to search in
 * @V: is the value to search
 * @L: is first index
 * @R: is last index
 *
 * Return: the first index where value is located
 */
#define interpolation(A, V, L, R) ((L) + (((double)((R) - (L)) / ((A)[(R)] \
				- (A)[(L)])) * ((V) - (A)[(L)])))

/*
 * interpolation_search - searches for a value in an array of integers using
 *                        the interpolation search algorithm
 *
 * @A: is a pointer to the first element of the array to search in
 * @S: is the number of elements in array
 * @V: is the value to search
 *
 * Return: the first index where value is located
 */
#define interpolation_search(A, S, V) (my_interpolation_search((A), (S), (V),\
			(S) - 1, 0))

/*
 * exponential_search - searches for a value in a sorted array
 *                      of integers using the Exponential search algorithms
 *
 * @A: pointer to the first element of the array to search in
 * @S: number of elements in array
 * @V: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */

#define exponential_search(A, S, V) (my_exponential_search((A), (S), (S), 1))
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
#define jump_search(A, S, V) my_jump_search((A), (S), (V), 0, 0)


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

/*
 * nodes_until - Advance n number of nodes on a singly-linked list.
 * @L: The current node.
 * @S: The steps needed to advance to the next node.
 * @N: The pointer to the next node. If step goes beyond the length
 *         of the list, returns the last node.
 */
#define nodes_until(L, S, N)                 \
	do {                                     \
		size_t _step;                        \
		for (_step = 0; _step < (S); _step++)\
		{                                    \
			if (!list->next)                 \
				break;                       \
			list = list->next;               \
		}                                    \
		N = (list);                          \
	} while (0)
#endif /* SEARCH_ALGOS */
