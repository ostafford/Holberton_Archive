#include "binary_trees.h"

/**
* binary_tree_node - Create a binary tree node.
*
* @parent: A pointer to the parent of the node.
* @value: The value to be put on the new node.
*
* Return: If it fails - NULL else - a pointer to the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *new_node;

/* This allocates memory for the new node*/
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL); /* This will return if malloc FAILS */

/*Node initiliaztion process*/
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL; /* No left child */
new_node->right = NULL; /* No RIght child */

return (new_node);
}
