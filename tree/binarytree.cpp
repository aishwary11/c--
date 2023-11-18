#include <bits/stdc++.h>
using namespace std;

class node {
   public:
    int data;
    node *left;
    node *right;
    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
}

node *
buildTree(node *root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
}

int main() {
    node *root = NULL;
    root = buildTree(root);
    return 0;
}