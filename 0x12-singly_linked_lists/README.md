REQUIREMENTS
use a list_s data structure in your project

TASKS

0. Print list
Wrire a function that prints all the elements of a list_t list
- prototypye: size_t print_list(const list_t *h)
- Return: the number of nodes
- Format: see example
- if str is NULL, print [0] (nil)
- you are allowed to use printf

1. List length
Write a function that returns the number of elements in a linked list_t list
- prototype: size_t list_len(const list_t *h);

2. Add node
Write a function that adds a new node at the beginning of a list_t list
- prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- you are allowed to use strdup

3. Add node at the end
Write a function that adds a new node at the end of a list_t list
- prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicates
- you are allowed to use strdup

4. Free list
Write a function that frees a list_t list
- prototype: void free_list(list_t *head);
