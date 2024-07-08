#include <iostream>

using namespace std;


void printItems(int n) {
    for (int i = 0; i < n; i++) { // O(a)
        cout << i << endl;
    }

    for (int j = 0; j < n; j++) { // O(b)
        cout << j << endl;
    }
}


// void printItems(int a, int b) {
//     for (int i = 0; i < a; a++) {
//         for (int j = 0; j < b; j++) {
//             cout << i << j << endl;
//         }
//     }
// }

// in total: O(a * b)

int main() {



    return 0;
}