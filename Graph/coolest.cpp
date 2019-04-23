#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void printAdj(map<string, vector<string>> adj);


// returns the person with most second level followers in the given graph
string coolest(string filename){
  ifstream input;
  input.open(filename);
  // "abhinav shivam"
  map<string, vector<string>> adj;

  string name1, name2;
  while(input >> name1 >> name2){
    adj[name2].push_back(name1);
  }
  printAdj(adj);
  string maxName = "";
  int max = 0;
  for(auto v : adj){
     int fof = 0;
     // for every followers, calculate his followers;
     for(auto neighbour : adj[v.first]){
       fof += adj[neighbour].size();
     }
     if(fof > max){
       maxName = v.first;
       max = fof;
     }
  }
  return maxName;
}




int main(){
  cout << "coolest person EVARR is " << coolest("input.txt") << endl;
}
// print adjacency list
void printAdj(map<string, vector<string>> adj){
  for(auto v : adj){
    cout << v.first << "->";
    for(auto neighbour : adj[v.first])
      cout << neighbour << ' ';
    cout << endl;
  }
}
