#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value) {
            Node* newNode = new Node(value); // create a new node
            head = newNode; // head points to a new node
            tail = newNode; // tail points to a new node
            length = 1;
        }
};

int main() {
    LinkedList* myLinkedList = new LinkedList(4);
    return 0;
}


/*
class LinkedList {
    LinkedList(int value) {...}
        create new node

3 member methods that all create new nodes
    void append(int value) {...}
        create new Node
        add Node to end

    void prepend(int value) {...}
        create new Node
        add Node to beginning

    bool insert(int index, int value) {...}
        create new Node
        insert Node
}   
*/

/*
Linked List structure
{
"value": 11,
"next": {
        "value": 3,
        "next": {
                "value": 23,
                "next": {
                        "value": 7,
                        "next": {
                                "value": 4,
                                "next": nullptr
                                }
                        }
                }
        }     
}
*/