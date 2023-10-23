#include <stddef.h>

/* Define the structure for a linked list node */
typedef struct list_s {
    int n;
    struct list_s *next;
} list_t;

/* Function to return the number of elements in the linked list */
size_t list_len(const list_t *h) {
    size_t count = 0;  // Initialize a counter for the number of elements

    // Traverse the linked list and count each element
    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}
