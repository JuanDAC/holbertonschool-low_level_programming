# header of hash tables

## Libraries
|   Name     |                       Description                                   |
|------------|---------------------------------------------------------------------|
| `stdlib.h` |  Is the header of the general purpose standar library.              |
| `string.h` |  Functions for manipulating arrays of characters.                   |
| `stdio.h`  |  Variable types,macros, functions for performing input and output.  |
## Structs

1. `hash_node_t`
Node of a hash table
	- **char \*** `key` The key, string
	The key is unique in the HashTable
	- **char \*** `value` The value corresponding to a key
	- **struct \*** `next` A pointer to the next node of the List

2. `hash_table_t`
Hash table data structure
 	- **unsigned long int** `size` The size of the array
 	- **hash_node_t \*\*** `array` An array of size `size`	
	Each cell of this array is a pointer to the first node of a linked list,
	because we want our HashTable to use a Chaining collision handling

