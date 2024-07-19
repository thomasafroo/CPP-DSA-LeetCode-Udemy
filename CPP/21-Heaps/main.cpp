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
        int remove() {
            if (heap.empty()) {
                return INT_MIN;
            }
            int maxValue = heap.front();
            
            if (heap.size() == 1) {
                heap.pop_back();
            } else {
                heap[0] = heap.back();
                heap.pop_back();
                sinkDown(0);
            }

            return maxValue;
        }
        void sinkDown(int index) {
            int maxIndex = index;
            while (true) {
                int leftIndex = leftChild(index);
                int rightIndex = rightChild(index);
                
                if (heap[leftIndex] > heap[maxIndex]) {
                    maxIndex = leftIndex;
                }
                if (heap[rightIndex] > heap[maxIndex]) {
                    maxIndex = rightIndex;
                }
                if (maxIndex != index) {
                    swap(index, maxIndex);
                    index = maxIndex;
                }
            }
        }

};



int main() {
    Heap* myHeap = new Heap();
    myHeap->insert(99);
    myHeap->insert(72);
    myHeap->insert(61);
    myHeap->insert(58);
    myHeap->printHeap();

    myHeap->insert(100);
    myHeap->printHeap();

    myHeap->insert(75);
    myHeap->printHeap();

    return 0;
} 