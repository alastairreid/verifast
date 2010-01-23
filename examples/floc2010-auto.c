#include "stdlib.h"

struct node {
  int value;
  struct node *next;
};

/*@
predicate node(struct node *n; int value, struct node *next) =
  n->value |-> value &*& n->next |-> next &*& malloc_block_node(n);