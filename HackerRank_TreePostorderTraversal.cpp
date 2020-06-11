// Author: Jesus Carlos Martinez Gonzalez
// Date: 10/06/2020
// Solution to: https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
// Language: C++
// Problem to solve: Complete the postOrder function in your editor below, which... 
// has 1 parameter: a pointer to the root of a binary tree... 
// It must print the values in the tree's postorder traversal as a single line of space-separated values.

// The following class was given as reference:
// class Node {
//     public:
//         int data;
//         Node *left;
//         Node *right;
//         Node(int d) {
//             data = d;
//             left = NULL;
//             right = NULL;
//         }
// };

// Logic: if there's a left node, call inOrder on it, if there's a right node call inOrder on it, print root's data followed by a blank space.
void postOrder(Node *root) {
    if (root->left) postOrder(root->left);
    if (root->right) postOrder(root->right);
    cout << root->data << " ";
}