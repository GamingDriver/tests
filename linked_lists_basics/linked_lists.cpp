#include <iostream>
#include <string>
#include <cctype>
/*
using namespace std;

// Define the structure for a binary tree node
struct TreeNode {
    char value;
    TreeNode* left;
    TreeNode* right;
};

// Function to create a new binary tree node
TreeNode* createNode(char value) {
    TreeNode* node = new TreeNode();
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Function to convert an arithmetic expression to a binary tree
TreeNode* convertToBinaryTree(string expression) {
    TreeNode* root = nullptr;
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (isdigit(c)) {
            TreeNode* node = createNode(c);
            if (root == nullptr) {
                root = node;
            }
            else {
                TreeNode* current = root;
                while (true) {
                    if (c < current->value) {
                        if (current->left == nullptr) {
                            current->left = node;
                            break;
                        }
                        current = current->left;
                    }
                    else {
                        if (current->right == nullptr) {
                            current->right = node;
                            break;
                        }
                        current = current->right;
                    }
                }
            }
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            TreeNode* node = createNode(c);
            if (root == nullptr) {
                root = node;
            }
            else {
                TreeNode* current = root;
                while (true) {
                    if (c < current->value) {
                        if (current->left == nullptr) {
                            current->left = node;
                            break;
                        }
                        current = current->left;
                    }
                    else {
                        if (current->right == nullptr) {
                            current->right = node;
                            break;
                        }
                        current = current->right;
                    }
                }
            }
        }
    }
    return root;
}

// Function to evaluate a binary tree
double evaluateBinaryTree(TreeNode* root) {
    if (root == nullptr) {
        return 0.0;
    }
    if (isdigit(root->value)) {
        return root->value - '0';
    }
    double leftValue = evaluateBinaryTree(root->left);
    double rightValue = evaluateBinaryTree(root->right);
    switch (root->value) {
    case '+':
        return leftValue + rightValue;
    case '-':
        return leftValue - rightValue;
    case '*':
        return leftValue * rightValue;
    case '/':
        return leftValue / rightValue;
    default:
        return 0.0;
    }
}

int main() {
    string expression = "4*3";
    TreeNode* root = convertToBinaryTree(expression);
    double result = evaluateBinaryTree(root);
    cout << "Result: " << result << endl;
    return 0;
}
*/