#include "binary_trees.h"


/**
 * swap - exchanges the values of two nodes.
 * @a: first node
 * @b: second node
 */
void swap(heap_t *a, heap_t *b)
{
    int temp = a->n;
    a->n = b->n;
    b->n = temp;
}

/**
 * heapify_up - reorganizes the heap by going backwards from a
 * given node until the max heap property is respected
 * @node: node to heapify
 * Return: pointer to the heapified node
 */
heap_t *heapify_up(heap_t *node)
{
    while (node->parent && node->n > node->parent->n)
	{
        swap(node, node->parent);
        node = node->parent;
    }
    return (node);
}

/**
 * create_node - creates a new node with a given value and a given parent.
 * @parent: parent of the node
 * @value: value of the node
 * Return: pointer to the created node
 */
heap_t *create_node(heap_t *parent, int value)
{
    heap_t *node = binary_tree_node(parent, value);
    return node;
}

/**
 * enqueue - adds a node to the end of a queue. If the queue is full, it doubles its capacity.
 * @queue: queue
 * @rear: rear of the queue
 * @q_capacity: capacity of the queue
 * @node: node to enqueue
 */
void enqueue(heap_t ***queue, size_t *rear, size_t *q_capacity, heap_t *node)
{
    if (*rear >= *q_capacity)
	{
        *q_capacity *= 2;
        *queue = realloc(*queue, sizeof(**queue) * *q_capacity);
    }
    (*queue)[(*rear)++] = node;
}

/**
 * dequeue - removes and returns the first node in the queue.
 * @queue: queue
 * @front: front of the queue
 * Return: dequeued node
 */
heap_t *dequeue(heap_t ***queue, size_t *front)
{
    return (*queue)[(*front)++];
}

/**
 * breadth_first_insert - inserts a new node in Breadth-First Order.
 * @root: root of the tree
 * @value: value of the node to insert
 * Return: pointer to the inserted node
 */
heap_t *breadth_first_insert(heap_t *root, int value)
{
    size_t front = 0, rear = 0, q_capacity = 1024;
    heap_t **queue = malloc(sizeof(*queue) * q_capacity);
    heap_t *node, *new_node = NULL;

    enqueue(&queue, &rear, &q_capacity, root);
    while (front < rear) {
        node = dequeue(&queue, &front);
        if (!node->left || !node->right)
		{
            new_node = create_node(node, value);
            if (!node->left)
			{
                node->left = new_node;
            }
			else
			{
                node->right = new_node;
            }
            break;
        }
        enqueue(&queue, &rear, &q_capacity, node->left);
        enqueue(&queue, &rear, &q_capacity, node->right);
    }

    free(queue);
    return new_node;
}

/**
 * heap_insert - inserts a new node into the heap. If the heap is empty,
 * the new node becomes the root. Otherwise, it uses breadth_first_insert
 * to insert the new node, then `heapify_up` to reorganize the heap.
 * @root: root of the tree
 * @value: value of the node to insert
 * Return: pointer to the inserted node
 */
heap_t *heap_insert(heap_t **root, int value)
{
    if (!root) 
        return (NULL);

    if (!*root)
	{
        *root = create_node(NULL, value);
        return (*root);
    }

    heap_t *inserted_node = breadth_first_insert(*root, value);
    return heapify_up(inserted_node);
}
