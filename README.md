# Lab-8: Binary Trees and Binary Search Trees

## Learning Objectives

- Complete recursive binary tree traversals.
- Implement insertion and search operations for a binary search tree (BST).

## Activity 1: Binary Tree Traversals

The tree builder uses this preorder list:

```text
{1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}
```

A value of `-1` represents a missing child. The program demonstrates inorder traversal and includes completed preorder and postorder traversals. Each node is printed followed by a space.

### Expected Output

| Traversal | Result |
| --- | --- |
| Preorder | `1 2 3 4 5` |
| Inorder | `2 1 4 3 5` |
| Postorder | `2 4 5 3 1` |

Source file: [`Lab8-Activity1-1.cpp`](Lab8-Activity1-1.cpp)

## Activity 2: BST Insertion and Search

The values are inserted in this order:

```text
50, 30, 70, 20, 40, 60, 80, 65
```

At each node, values smaller than the node go to the left subtree. Values greater than or equal to the node go to the right subtree. The implementation uses the following function signatures:

```cpp
Node* insert(Node*, int);
Node* search(Node*, int);
```

`search` returns the matching node or `nullptr` when the key is not found.

### Expected Output

```text
BST In-Order Traversal:
20 30 40 50 60 65 70 80
Search for 40: Found
Search for 55: Not found
```

Source file: [`Lab8Activity2.cpp`](Lab8Activity2.cpp)

## Compiling and Running

Compile each activity separately because each source file contains its own `main` function:

```bash
g++ -std=c++17 Lab8-Activity1-1.cpp -o activity1
./activity1

g++ -std=c++17 Lab8Activity2.cpp -o activity2
./activity2
```
