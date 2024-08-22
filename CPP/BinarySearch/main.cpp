#include <iostream>
using namespace std;

int binarySearch(int arr[], int x) {
    int low = 0;
    int high = sizeof(arr) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            return mid;
        }
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