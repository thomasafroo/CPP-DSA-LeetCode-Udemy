#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Graph {
    private:
        unordered_map<string, unordered_set<string> > adjList;

    public:
        void printGraph() {
            for (auto [vertex, edges] : adjList) {
                cout << vertex << ": [ ";
                for (auto edge : edges) {
                    cout << edge << " ";
                }
                cout << "]" << endl;
            }
        }

        bool addVertex(string vertex) {
            if (adjList.count(vertex) == 0) {
                adjList[vertex];
                return true;
            }
            return false; 
        }

        bool addEdge(string vertex1, string vertex2) {
            if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
                adjList.at(vertex1).insert(vertex2);
                adjList.at(vertex2).insert(vertex1);
                return true;
            }
            return false;
        }

        bool removeEdge(string vertex1, string vertex2) {
            if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
                adjList.at(vertex1).erase(vertex2);
                adjList.at(vertex2).erase(vertex1);
                return true;
            }
            return false;
        }

};

int main() {
    Graph* myGraph = new Graph();

    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");

    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "C");
    myGraph->addEdge("B", "C");

    myGraph->printGraph();

    myGraph->removeEdge("A", "B");

    return 0;
}