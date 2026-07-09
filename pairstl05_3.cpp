#include <iostream>
using namespace std;

int main()
{
    // (Neighbour, Weight)
    pair<int,int> edge = {2,10};

    cout << "Neighbour : " << edge.first << endl;
    cout << "Weight    : " << edge.second << endl;

    return 0;
}
//output
2
10


  weighted graph
//   vector<pair<int,int>> adj[V];

// // Edge u -> v with weight wt
// adj[u].emplace_back(v, wt);
