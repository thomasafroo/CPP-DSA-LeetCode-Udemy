#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main() {

    map<string, int> map;

    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    cout << "Size of map: " << map.size() << endl;

    

    return 0;
}