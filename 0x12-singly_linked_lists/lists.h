#ifndef LISTS_H
#define LISTS_H

/* Struct definition for a singly-linked list */
typedef struct list_s
{
	char *str;          /* String data in the node */
	struct list_s *next; /* Pointer to the next node in the list */
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif
