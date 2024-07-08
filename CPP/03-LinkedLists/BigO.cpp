#include <iostream> 
using namespace std;

class Node {
    public:
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            next = nullptr; // don't need 'this' because it's not a parameter
        }

};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;


    public:
        LinkedList(int value) { // create a new node
            Node* newNode = new Node(value);
            head = newNode;
            
        }
        void append(int value) { // create a new node and add it to the end

        }
        void prepend(int value) { // create a new node and add it to the beginning

        }
        bool insert(int index, int value) { // create a new node and insert at an index

        }
    
};


int main() {


    return 0;
}