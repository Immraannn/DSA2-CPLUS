// vector<int> adj[V];                 // Unweighted graph

// vector<pair<int,int>> adj[V];       // Weighted graph

// vector<vector<int>> adj(V);         // Runtime-sized graph

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Number of vertices
    int V = 4;

    // Create an array of vectors
    // Each vector stores the neighbours of one vertex
    vector<int> adj[V];// every v=1,v=2 are separate vector in a row storing edges(neighbour)

    // -------------------------------
    // Add edges for an undirected graph
    // -------------------------------

    // Edge : 0 - 1
    adj[0].push_back(1);
    adj[1].push_back(0);

    // Edge : 0 - 2
    adj[0].push_back(2);
    adj[2].push_back(0);

    // Edge : 0 - 3
    adj[0].push_back(3);
    adj[3].push_back(0);

    // Edge : 1 - 2
    adj[1].push_back(2);
    adj[2].push_back(1);

    // Print the adjacency list
    cout << "Adjacency List\n\n";

    for(int i = 0; i < V; i++)
    {
        // Print current vertex
        cout << i << " -> ";

        // Print all neighbours of vertex i
        for(int neighbour : adj[i])
        {
            cout << neighbour << " ";
        }

        cout << endl;
    }

    return 0;
}
//Output
// Adjacency List

// 0 -> 1 2 3

// 1 -> 0 2

// 2 -> 0 1

// 3 -> 0


TO STORE NEIGHBOUR+ WEIGHT we need two integer to store for weighted Graphs


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int V = 3;

    // Each vector stores (neighbour, weight)
    vector<pair<int,int>> adj[V];

    // Edge 0 -> 1 (weight = 5)
    adj[0].push_back({1,5});

    // Edge 0 -> 2 (weight = 8)
    adj[0].push_back({2,8});

    cout << "Weighted Adjacency List\n\n";

    for(int i = 0; i < V; i++)
    {
        cout << i << " -> ";

        for(auto edge : adj[i])
        {
            cout << "("
                 << edge.first
                 << ","
                 << edge.second
                 << ") ";
        }

        cout << endl;
    }

    return 0;
}
//OUTPUT
// Weighted Adjacency List

// 0 -> (1,5) (2,8)

// Initialising distances
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> dist;

    // Create distance array of size 5
    dist.resize(5);

    // Initialize distances
    for(int i = 0; i < dist.size(); i++)
    {
        dist[i] = -1;
    }

    // Print distances
    for(int x : dist)
    {
        cout << x << " ";
    }

    return 0;
}
// 1 ->

// 2 ->
