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

class HashTable {
    private:
        static const int SIZE = 7;
        // static means store one 7 in memory
        Node* dataMap[SIZE];
    public: 
};


int main() {
    HashTable* myHashTable = new HashTable(); // default constructor

    myHashTable->printTable();

    return 0;
}