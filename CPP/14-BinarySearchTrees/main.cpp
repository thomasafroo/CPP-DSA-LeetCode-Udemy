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
};



int main() {
    BinarySearchTree* myBST = new BinarySearchTree();

    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);

    myBST->insert(27);

    cout << myBST->root->left->right->value << endl;

    return 0;
}