REQUIREMENTS
all functions and prototypes are in the header file called lists.h

TASKS
0. Print list
Write a function that prints all the elements of a listint_t list
- prototype: size_t print_listint(const listint_t *h);
- return: the number of nodes

1. List length
Write a function that returns the number of elements in a linked listint_t list
- prototype: size_t listint_len(const listint_t *h);

2. Add node
Write a function that adds a new node at the beginning of a listint_t list
- prototype: listint_t *add_nodeint(listint_t **head, const int n);
- return: the address of the new element, or NULL if it failed

3. Add node at the end
Write a function that adds a new node at the end of a listint_t list
- prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- return: the address of the new element, or NULL if it failed

4. Free list
Write a function that frees a listint_t list
- prototype: void free_listint(listint_t *head);

5. Free
Write a function that frees a listint_t list
- prototype: void free_listint2(listint_t **head);
- the function sets the head to NULL

6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node's data(n);
- prototype: int pop_listint(listint_t **head);
- if the linked list is empty return 0

7. Get node at index
Write a function that returns the nth node of a listint_t linked list
- prototype: listint_t *het_nodeint_at_index(listint_t *head, unsigned int index);
- index is the index of the node starting at 0

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list
- prototype: int sum_listint(listint_t *head)
- if the list is empty, return 0

9. Insert
Write a function that inserts a new node at a given position
- prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
- idx is the index of the list where new node should be added. Starts at 0
- returns the address of the new node or NULL if it fails
- if it is not possible to add the new node at index idx, do not add the new node and return NULL

10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list
- prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
- index is the index of the node that should be deleted, Index starts at 0
- returns: 1 if it succeeded, -1 if it failed
