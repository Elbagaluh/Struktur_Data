#include <iostream>
#include <vector>
using namespace std;

class Graph {

private:
    int vertices;
    vector<vector<int>> adjacencyList;
    vector<bool> visited;

    void DFSUtil(int vertex){

        visited[vertex]=true;
        cout<<vertex<<" ";

        for(int neighbor : adjacencyList[vertex]){
            if(!visited[neighbor])
                DFSUtil(neighbor);
        }
    }

public:

    Graph(int v){
        vertices=v;
        adjacencyList.resize(v);
        visited.resize(v,false);
    }

    void addEdge(int source,int destination){

        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);

    }

    void DFS(int start){

        fill(visited.begin(),visited.end(),false);

        cout<<"DFS Traversal : ";

        DFSUtil(start);

        cout<<endl;
    }

};

int main(){

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

    graph.DFS(0);

}
