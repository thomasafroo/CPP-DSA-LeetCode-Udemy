#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Graph {
    private:
        unordered_map<string, unordered_set<string> > adjList;

    public:
        bool addVertex(string vertex) {
            if (adjList.count(vertex) == 0) {
                adjList[vertex];
            }
        }
};