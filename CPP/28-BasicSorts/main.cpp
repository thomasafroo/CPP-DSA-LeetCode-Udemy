#include <iostream>
using namespace std;

// bubble sort algorithm
// puts the largest element in the array at the end, and then the next iteration excludes it.

void bubbleSort(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j+1];
                array[j] = array[i];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

int main() {

    int myArray[] = {6,4,2,5,1,3};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    bubbleSort(myArray, size);

    for (auto value : myArray) {
        cout << value << " ";
    }

    return 0;
}
