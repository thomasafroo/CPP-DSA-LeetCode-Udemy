#include <iostream>
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

class BinarySearchTree {
    public:
        Node* root;

    public:
        BinarySearchTree() {
            root = nullptr;
        }
        Node* getRoot() {
            return root;
        }
        bool insert(int value) {
            Node* newNode = new Node(value);
            if (root == nullptr) {
                root = newNode;
                return true;
            }
            Node* temp = root;
            while (true) {
                if (newNode->value == temp->value) return false;
                if (newNode->value < temp->value) { // if the new node is less than the temp node
                    if (temp->left == nullptr) {
                        temp->left = newNode;
                        return true;
                    }
                temp = temp->left;
            } else {
                if (temp->right == nullptr) {
                    temp->right = newNode;
                    return true;
                }
                temp = temp->right;
                }
            }
        }

        bool contains(int value) {
            if (root == nullptr) return false;
            Node* temp = root;
            while (temp) {
                if (value < temp->value) {
                    temp = temp->left;
                } else if (value > temp->value) {
                    temp = temp->right;
                } else { // then temp = root
                    return true;
                }

            }
            return false;
        }

        bool rContains(Node* currentNode, int value) {
            if (currentNode == nullptr) return false;

            if (currentNode->value == value) return true;

            if (value < currentNode->value) {
                return rContains(currentNode->left, value);
            } else {
                return rContains(currentNode->right, value);
            }
        }

        bool rContains(int value) {
            return rContains(root, value);
        }

        Node* rInsert(Node* currentNode, int value) {
            if (currentNode == nullptr) return new Node(value);
            if (value < currentNode->value) {
                currentNode->left = rInsert(currentNode->left, value);
            } else if (value > currentNode->value) {
                currentNode->right = rInsert(currentNode->right, value);
            }
            return currentNode;
        }

        void rInsert(int value) {
            if (root == nullptr) root = new Node(value);
            rInsert(root, value);
        }

        Node* deleteNode(Node* currentNode, int value) {
            if (currentNode == nullptr) return nullptr;

            if (value < currentNode->value) {
                currentNode->left = deleteNode(currentNode->left, value);
            } else if (value > currentNode->value) {
                currentNode->right = deleteNode(currentNode->right, value);
            } else {
                if (currentNode->left == nullptr && currentNode->right == nullptr) {
                    delete(currentNode);
                    return nullptr;
                } else if (currentNode->left == nullptr) {
                    Node* temp = currentNode->right;
                    delete(currentNode);
                    return temp;
                } else if (currentNode->right == nullptr) {
                    Node* temp = currentNode->left;
                    delete(currentNode);
                    return temp;
                } else {

                }
            }

            return currentNode;
        }

        void deletedNode(int value) {
            root = deleteNode(root, value);
        }

        int minValue(Node* currentNode) {
            while (currentNode->left != nullptr) {
                
            }
        }

};

int main() {

    BinarySearchTree* myBST = new BinarySearchTree();
    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(3);

    cout << "\nRoot: " << myBST->getRoot()->value;
    cout << "\n\nRoot->left: " << myBST->getRoot()->left->value;
    cout << "\n\nRoot->Right: " << myBST->getRoot()->right->value;
    return 0;
}