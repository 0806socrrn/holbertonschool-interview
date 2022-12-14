#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

typedef struct binary_tree_s heap_t;
heap_t *heap_insert(heap_t **root, int value);
heap_t *_insert(heap_t *tree, heap_t *new);
size_t binary_tree_size(const heap_t *tree);
heap_t *find_parent(heap_t *tree, int index, int nb_nodes);

#endif /* _BINARY_TREES_H_ */