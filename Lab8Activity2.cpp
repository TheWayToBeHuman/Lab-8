#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// Insert a new value into the BST.
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Return the matching node or nullptr if key is not in the BST.
Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

// Inorder: Left -> Root -> Right
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main(){
    vector<int> values = {50, 30, 70, 20, 40, 60, 80, 65};
    Node* root = nullptr;

    // Insertion
    for (int value : values)
        root = insert(root, value);

    // Traversal
    cout << "BST In-Order Traversal:" << endl;
    inorderTraversal(root);
    cout << endl;

    // Search
    int targets[] = {40, 55};
    for (int target : targets) {
        Node* result = search(root, target);
        cout << "Search for " << target << ": ";
        cout << (result != nullptr ? "Found" : "Not found") << endl;
    }

    return 0;
}
