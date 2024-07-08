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

class Stack {
    private:
        Node* top; 
        int height;

    public:
        Stack(int value) {
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack() {
            Node* temp = top;
            while (temp) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getTop() {
            cout << "Top: " << top->value << endl;
        }

        void getHeight() {
            cout << "Height: " << height << endl;
        }

        void push(int value) {
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
        }

        int pop() {
            if (height == 0) {
                return INT_MIN;
            }
            Node* temp = top;
            int poppedValue = top->value;
            top = top->next;
            delete temp;
            height--;

            return poppedValue;
        }
};
// Linked List is always going to be more efficient for enqueuing and dequeuing a node than using a vector
// Instead of Head and Tail, we use first and last

class Queue {
    private:
        Node* first;
        Node* last;
        int length;

    public:
        Queue(int value) {
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;
        }

        void printQueue() {
            Node* temp = first;
            while (temp) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getFirst() {
            cout << "First: " << first->value << endl;
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

        void getLast() {
            cout << "Last: " << last->value << endl;
        }

        void enqueue(int value) {
            Node* newNode = new Node(value);
            if (length == 0) {
                first = newNode;
                last = newNode;
            } else {
                last->next = newNode;
                last = newNode;
                
            }
            length++;
        }

        int dequeue() {
            if (length == 0) return INT_MIN;
            Node* temp = first;
            int dequeuedValue = first->value;
            if (length == 1) {
                first = nullptr;
                last = nullptr;
            } else {
                first = first->next;
            }
            delete temp;
            length--;
            return dequeuedValue;
        }
        

};
int main() {
    Queue* myQueue = new Queue(2);
    myQueue->enqueue(1);
    myQueue->printQueue();
    myQueue->dequeue();
    myQueue->printQueue();
    return 0;
}