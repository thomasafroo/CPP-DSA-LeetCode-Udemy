#include <iostream>
using namespace std;

class Node {
    Node* left;
    Node* right;



};

bool rContains(Node* currentNode, int value) {
    if (currentNode == nullptr) return false;

    if (currentNode->value == value) return true;

    if (value < currentNode->value) {
        return rContains(currentNode->left, value);
    }
}

bool rContains(int value) {
    return rContains(root, value);
}


int main() {

    return 0;
}