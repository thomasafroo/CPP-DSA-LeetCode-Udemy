#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) return n;
    return n *factorial(n-1);
}


int main() {
    cout << "Enter a number to get its factorial: ";
    int n;
    cin >> n;
    cout << to_string(n) + "! = " << factorial(n) << endl;

    return 0;
}