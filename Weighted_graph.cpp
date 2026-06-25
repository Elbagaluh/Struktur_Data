#include <iostream>
#include <vector>

using namespace std;

class Graph{

private:

    int vertices;

    vector<vector<pair<int,int>>> adjacencyList;

public:

    Graph(int v){

        vertices=v;

        adjacencyList.resize(v);

    }

    void addEdge(int source,int destination,int weight){

        adjacencyList[source].push_back({destination,weight});
        adjacencyList[destination].push_back({source,weight});

    }

    void printGraph(){

        for(int i=0;i<vertices;i++){

            cout<<i<<" : ";

            for(auto edge : adjacencyList[i]){

                cout<<"("<<edge.first<<","<<edge.second<<") ";

            }

            cout<<endl;

        }

    }

};

int main(){

    Graph graph(8);

    graph.addEdge(0,1,4);
    graph.addEdge(0,2,2);
    graph.addEdge(1,3,5);
    graph.addEdge(1,4,10);
    graph.addEdge(2,5,3);
    graph.addEdge(3,6,7);
    graph.addEdge(4,6,2);
    graph.addEdge(5,7,6);
    graph.addEdge(6,7,1);

    graph.printGraph();

}
