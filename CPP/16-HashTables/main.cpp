#include <iostream>
using namespace std;

class Node {
    public: 
        string key;
        int value;
        Node* next;

        Node(string key, int value) {
            this->key = key;
            this->value = value;
            next = nullptr;
        }
};

class HashTable {
    private:
        static const int SIZE = 7;
        // static means store one 7 in memory
        Node* dataMap[SIZE];

    public: 
        void printTable() {
            for (int i = 0; i < SIZE; i++) {
                cout << i << ":" << endl;
                if (dataMap[i]) {
                    Node* temp = dataMap[i];
                    while (temp) {
                        cout << "  {" << temp->key << ", " << temp->value << "}" << endl;
                        temp = temp->next;
                    }
                }
            }
        }
        
        int hash(string key) { // hash function
            int hash = 0;
            for (int i = 0; i < key.length(); i++) {
                int asciiValue = int(key[i]);
                hash = (hash + asciiValue * 23) % SIZE;
            }

            return hash; 
        }

        void set(string key, int value) {
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if (dataMap[index] == nullptr) {
                dataMap[index] = newNode;
            } else {
                Node* temp = dataMap[index];
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode; 
            }
        }
};


int main() {

    HashTable* myHashTable = new HashTable(); // default constructor
 
    myHashTable->printTable();

    return 0;
}