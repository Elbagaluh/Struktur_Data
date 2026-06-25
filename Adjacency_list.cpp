#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int vertices;
    vector<vector<int>> adjacencyList;

public:
    Graph(int v) {
        vertices = v;
        adjacencyList.resize(v);
    }

    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);
    }

    void printGraph() {
        cout << "Adjacency List\n\n";

        for (int i = 0; i < vertices; i++) {
            cout << i << " : ";

            for (int neighbor : adjacencyList[i])
                cout << neighbor << " ";

            cout << endl;
        }
    }
};

int main() {

    Graph graph(8);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,5);
    graph.addEdge(3,6);
    graph.addEdge(4,6);
    graph.addEdge(5,7);
    graph.addEdge(6,7);

    graph.printGraph();

    return 0;
}
