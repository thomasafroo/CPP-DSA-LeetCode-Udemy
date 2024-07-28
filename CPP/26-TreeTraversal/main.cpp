#include <iostream>
#include <queue>

using namespace std;


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