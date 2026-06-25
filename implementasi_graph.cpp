#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    vector<string> person;
    vector<vector<int>> adjacencyList;

public:
    Graph() {
        person = {
            "Andi",
            "Budi",
            "Citra",
            "Dinda",
            "Eko",
            "Fajar",
            "Gina",
            "Hana"
        };

        adjacencyList.resize(person.size());
    }

    void addFriend(int a, int b) {
        adjacencyList[a].push_back(b);
        adjacencyList[b].push_back(a);
    }

    void printGraph() {

        cout << "Daftar Pertemanan\n\n";

        for (int i = 0; i < person.size(); i++) {

            cout << person[i] << " -> ";

            for (int j : adjacencyList[i]) {
                cout << person[j] << " ";
            }

            cout << endl;
        }
    }
};

int main() {

    Graph social;

    social.addFriend(0,1); // Andi-Budi
    social.addFriend(0,2); // Andi-Citra
    social.addFriend(1,3); // Budi-Dinda
    social.addFriend(1,4); // Budi-Eko
    social.addFriend(2,5); // Citra-Fajar
    social.addFriend(3,6); // Dinda-Gina
    social.addFriend(4,6); // Eko-Gina
    social.addFriend(5,7); // Fajar-Hana
    social.addFriend(6,7); // Gina-Hana

    social.printGraph();

    return 0;
}
