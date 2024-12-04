# Single Linked Lists
This project implements functions to work with singly linked lists in C.

## Data Structure

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
