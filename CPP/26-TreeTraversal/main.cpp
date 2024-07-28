#include <iostream>
#include <queue>

using namespace std;

class Node {
    public: 
        int value;
        Node* left;
        Node* right;


        Node(int value) {
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
};

void BFS() {
    queue<Node*> myQueue;
    myQueue.push(root);
    while (myQeuue.size() > 0) {

        Node* currentNode = myQueue.front();
        myQueue.pop();
        cout << currentNode->value << " ";
        if (currentNode->left != nullptr) {
            myQueue.push(currentNode->left);
        }
        if (currentNode->right != nullptr) {
            myQueue.push(currentNode->right);
        }
    }
}




int main() {

    return 0;
}