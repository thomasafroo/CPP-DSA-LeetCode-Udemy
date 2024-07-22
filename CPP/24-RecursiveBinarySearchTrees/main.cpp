#include <iostream>
using namespace std;

class Node {


}

bool rContains(Node* currentNode, int value) {
    if (currentNode == nullptr) return false;

    if (currentNode->value == value) return true;
}

bool rContains(int value) {
    return rContains(root, value);
}


int main() {

    return 0;
}