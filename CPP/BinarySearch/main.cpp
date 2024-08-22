#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // check if x is at present at mid 
        if (arr[mid] == x) {
            return mid;
        }

        // if x is greater, then ignore the left half
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}





int main() {




    return 0;
}