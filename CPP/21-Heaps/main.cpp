#include <iostream>
#include <vector>
using namespace std;

class Heap {
    private:
        vector<int> heap;

        int leftChild(int index) { // 0-indexed heap
            return 2 * index + 1;
        }

        int rightChild(int index) {
            return 2 * index + 2;
        }

        int parent(int index) {
            return (index - 1) / 2;
        }

        void swap(int index1, int index2) {
            int temp = heap[index1];
            heap[index1] = heap[index2];
            heap[index2] = temp;
        }

    public:
        void printHeap() {
            cout << "\n[";
            for (size_t i = 0; i < heap.size(); i++) {
                cout << heap[i];
                if (i < heap.size() - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        }

        void insert(int value) {
            heap.push_back(value);
            int current = heap.size() - 1;

            while (current > 0 && heap[current] > heap[parent(current)]) {
                swap(current, parent(current));
                current = parent(current);
            }
        }

};



int main() {
    

    return 0;
} 