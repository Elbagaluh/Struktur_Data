#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF=1e9;

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

    void dijkstra(int start){

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> distance(vertices,INF);

        distance[start]=0;

        pq.push({0,start});

        while(!pq.empty()){

            int current=pq.top().second;

            int dist=pq.top().first;

            pq.pop();

            if(dist>distance[current])
                continue;

            for(auto edge : adjacencyList[current]){

                int neighbor=edge.first;

                int weight=edge.second;

                if(distance[current]+weight<distance[neighbor]){

                    distance[neighbor]=distance[current]+weight;

                    pq.push({distance[neighbor],neighbor});

                }

            }

        }

        cout<<"Jarak dari vertex "<<start<<endl;

        for(int i=0;i<vertices;i++){

            cout<<i<<" = "<<distance[i]<<endl;

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

    graph.dijkstra(0);

}
