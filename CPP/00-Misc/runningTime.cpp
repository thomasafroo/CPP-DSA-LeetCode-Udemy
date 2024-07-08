#include <iostream>
using namespace std;

int main() {
    int n = 10;
    cout << "n = " << n << endl;
    int r = 0;
    int q = 8*n;
    for (int i=0; i<=q; i = i+4) {
        for (int j=0; j<i; j++) {
            r++;
        }
    }

    cout << "r = " << r << endl;

    return 0;
}