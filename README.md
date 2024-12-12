# Binary-Tree-From-scratch
My own Implemented Binary Tree From Scratch
# Binary Tree Implementation in C

## Overview
This project implements a binary tree in the C programming language. The main features include the ability to insert nodes into the binary tree and perform in-order, pre-order, and post-order traversals to display the stored values in various orders.

## Features
- **Dynamic Node Creation**: Nodes are dynamically allocated using `malloc`.
- **Insertion**: Insert integers into the binary tree while maintaining its properties.
- **Traversals**:
  - **In-order Traversal**: Traverse the tree in ascending order of the values stored in the nodes.
  - **Pre-order Traversal**: Traverse the tree by visiting the root first, then the left subtree, and finally the right subtree.
  - **Post-order Traversal**: Traverse the tree by visiting the left subtree, then the right subtree, and finally the root.

## Code Structure
### `struct node`
The `node` structure represents a single node in the binary tree.
```c
struct node {
    short data;               // Value stored in the node
    struct node *left;        // Pointer to the left child
    struct node *right;       // Pointer to the right child
};
```

### Functions
#### `struct node *createNode(short data)`
- **Description**: Creates a new binary tree node with the given data.
- **Parameters**:
  - `data`: The value to be stored in the node.
- **Returns**: A pointer to the newly created node.

#### `struct node *insertNode(struct node *root, short data)`
- **Description**: Inserts a new value into the binary tree, maintaining the binary search tree property.
- **Parameters**:
  - `root`: A pointer to the root of the tree.
  - `data`: The value to be inserted.
- **Returns**: A pointer to the root of the updated tree.

#### `short inorder(struct node *root)`
- **Description**: Performs an in-order traversal of the binary tree and prints the values in ascending order.
- **Parameters**:
  - `root`: A pointer to the root of the tree.
- **Returns**:
  - `0` if the tree is empty.
  - Prints the values in ascending order otherwise.

#### `short preorder(struct node *root)`
- **Description**: Performs a pre-order traversal of the binary tree and prints the values.
- **Parameters**:
  - `root`: A pointer to the root of the tree.
- **Returns**:
  - `0` if the tree is empty.
  - Prints the values in pre-order otherwise.

#### `short postorder(struct node *root)`
- **Description**: Performs a post-order traversal of the binary tree and prints the values.
- **Parameters**:
  - `root`: A pointer to the root of the tree.
- **Returns**:
  - `0` if the tree is empty.
  - Prints the values in post-order otherwise.

### `main` Function
The `main` function demonstrates the binary tree implementation by:
1. Creating a root node.
2. Inserting multiple nodes into the binary tree.
3. Performing in-order, pre-order, and post-order traversals and printing the values.

## Example
### Input
The following values are inserted into the tree in this order: `5, 3, 7, 2, 9, 4, 6, 8`.

### Output
#### In-order Traversal
```
2 3 4 5 6 7 8 9
```
#### Pre-order Traversal
```
5 3 2 4 7 6 9 8
```
#### Post-order Traversal
```
2 4 3 6 8 9 7 5
```

If no nodes are added to the tree, the output will indicate:
```
No Nodes Added!
```


## Notes
- The `inorder`, `preorder`, and `postorder` functions check if the tree is empty by evaluating whether the root is `NULL`.
- Memory allocation is handled using `malloc`. Ensure proper memory management for larger programs.



