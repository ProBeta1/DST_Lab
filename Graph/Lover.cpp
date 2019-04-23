#include <bits/stdc++.h>
#include <fstream>
using namespace std;

#define graph unordered_map<string, set<string>>

const string EGO_FILE_NAME = "348.edges";

void printAdj(graph adj);
int edges (graph egoGraph);
bool Friends(graph egoGraph, string a, string b);
set<string> getNeighbours(graph egoGraph, string amigo);

/* Function: Load Ego Network
 * usage: loadEgoNetwork(graph);
 * --------------------------
 * Loads the contents of an edge file into the ego graph.
 */
void loadEgoNetwork(graph &adj){
  cout << "Loading facebook ego network... " << endl;
    ifstream fileStream;
    fileStream.open(EGO_FILE_NAME);
    string a, b;
    while(fileStream >> a >> b) {
      adj[a].insert(b);
      adj[b].insert(a);
    }
}


/* Function: Get Dispersion
 * usage: getDispersion(egoGraph, pointerToNode 475) -> 4996
 * --------------------------
 * Calculates the dispersion score of a given vertex and an
 * ego network. See article: http://arxiv.org/pdf/1310.6753v1.pdf
 */
int getDispersion(graph egoGraph, string amigo) {
    int count = 0;

    //set<string> mutualFriends = getNeighbours(egoGraph, amigo);
    for (auto a : egoGraph[amigo]) {
        for (auto b : egoGraph[amigo]) {
            if (a == b) {
                continue;
            }
            // if a and b are not friends,
            if(egoGraph[a].find(b) == egoGraph[a].end() ) {
                count++;
            }
        }
    }

    return count;
}

int main(){
    graph egoGraph;
    loadEgoNetwork(egoGraph);
    printAdj(egoGraph);
    // should be 224 and 12,768 respectively
    cout << "Num nodes: " << egoGraph.size() << endl;
    cout << "Num edges: " << edges(egoGraph) << endl;

    // this should be 4996
    cout << "Dispersion of node 475: ";
    cout << getDispersion(egoGraph, "475") << endl;

    cout << "Calculating dispersion..." << endl;
    priority_queue<pair<int, string>> loverQueue;

    for(auto v : egoGraph) {
        int d = getDispersion(egoGraph, v.first);
        loverQueue.push(make_pair(d, v.first));
        if(loverQueue.size() % 10 == 0) {
            cout << loverQueue.size() << endl;
        }
    }

    cout << "The 10 most likely lovers:" << endl;
    for(int i = 0; i < 10; i++) {
        int priority = loverQueue.top().first;
        string name = loverQueue.top().second;
        loverQueue.pop();
        cout << name << " " << priority << endl;
    }

    cout << "Thanks for playing" << endl;

}





// return number of  edges in the egoGraph
int edges(graph egoGraph){
  int n = 0;
  for(auto v : egoGraph){
    n += egoGraph[v.first].size();
  }
  return 2 * n;
}

// print adjacency list
void printAdj(graph adj){
  for(auto v : adj){
    cout << v.first << "->";
    for(auto neighbour : adj[v.first])
      cout << neighbour << ' ';
    cout << endl;
  }
}


