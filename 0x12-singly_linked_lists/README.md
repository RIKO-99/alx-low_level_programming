****** THIS IS A PROJECT ON SINGLY LINKED LIST *********

singly linked list is a linear data structure which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements using pointers.

*********** task 0 ************

Write a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
If str is NULL, print [0] (nil)
You are allowed to use printf

*********** task 1 ************

Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

*********** task 2 ************

Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

*********** task 3 *************

Write a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

*********** task 4 ************

Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);


>>>>>>>>>>>>>>END README FILE <<<<<<<<<<<<<<<<<<<<<<<<
