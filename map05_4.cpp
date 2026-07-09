#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Node -> Distance
    map<int,int> dist;

    dist[0] = 0;
    dist[1] = 5;
    dist[2] = 8;

    for(const auto &node : dist)
    {
        cout << node.first
             << " -> "
             << node.second
             << endl;
    }

    return 0;
}
// output
// 0 -> 0
// 1 -> 5
// 2 -> 8

// City -> Vertex ID
map<string,int> id;

// Node -> Distance
map<int,int> dist;

// Node -> Parent
map<int,int> parent;

// Node -> Visited
map<int,bool> visited;





#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // ----------------------------------------------------
    // Create a map
    // Key   -> int   (Node ID)
    // Value -> string (City Name)
    // Map stores data in sorted order of keys.
    // ----------------------------------------------------
    map<int, string> cities;

    // ----------------------------------------------------
    // 1. Insert elements using []
    // If key doesn't exist, it is created.
    // If key exists, its value is updated.
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    cities[1] = "Delhi";
    cities[2] = "Mumbai";
    cities[3] = "Patna";

    // ----------------------------------------------------
    // 2. Insert using insert()
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    cities.insert({4, "Kolkata"});
    cities.insert(make_pair(5, "Chennai"));

    // ----------------------------------------------------
    // 3. Display the map
    // Maps are automatically sorted by key.
    // ----------------------------------------------------
    cout << "Initial Map\n";

    for(const auto &x : cities)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // ----------------------------------------------------
    // 4. Access element using []
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    cout << "\nCity with Key 2 : "
         << cities[2] << endl;

    // ----------------------------------------------------
    // 5. Update value
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    cities[2] = "Pune";

    cout << "\nAfter Updating Key 2\n";

    for(const auto &x : cities)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // ----------------------------------------------------
    // 6. Find a key
    // find() returns iterator
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    auto it = cities.find(3);

    if(it != cities.end())
    {
        cout << "\nKey 3 Found : "
             << it->second << endl;
    }

    // ----------------------------------------------------
    // 7. Count
    // Returns 1 if present, otherwise 0
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    if(cities.count(5))
    {
        cout << "Key 5 Exists\n";
    }

    // ----------------------------------------------------
    // 8. Size
    // Time Complexity : O(1)
    // ----------------------------------------------------
    cout << "\nSize : "
         << cities.size() << endl;

    // ----------------------------------------------------
    // 9. Empty
    // Time Complexity : O(1)
    // ----------------------------------------------------
    cout << "Is Empty : "
         << cities.empty() << endl;

    // ----------------------------------------------------
    // 10. Erase by Key
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    cities.erase(4);

    cout << "\nAfter Erasing Key 4\n";

    for(const auto &x : cities)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // ----------------------------------------------------
    // 11. Erase using Iterator
    // Time Complexity : O(log n)
    // ----------------------------------------------------
    auto itr = cities.find(1);

    if(itr != cities.end())
    {
        cities.erase(itr);
    }

    cout << "\nAfter Erasing Key 1\n";

    for(const auto &x : cities)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // ----------------------------------------------------
    // 12. Begin (Smallest Key)
    // Time Complexity : O(1)
    // ----------------------------------------------------
    cout << "\nFirst Element\n";

    cout << cities.begin()->first
         << " -> "
         << cities.begin()->second
         << endl;

    // ----------------------------------------------------
    // 13. End()
    // end() points AFTER the last element.
    // It cannot be dereferenced.
    // ----------------------------------------------------

    // ----------------------------------------------------
    // 14. Clear
    // Removes all elements
    // Time Complexity : O(n)
    // ----------------------------------------------------
    cities.clear();

    cout << "\nAfter Clear()\n";

    cout << "Size : "
         << cities.size() << endl;

    cout << "Empty : "
         << cities.empty() << endl;

    return 0;
}
//output
// Initial Map
// 1 -> Delhi
// 2 -> Mumbai
// 3 -> Patna
// 4 -> Kolkata
// 5 -> Chennai

// City with Key 2 : Mumbai

// After Updating Key 2
// 1 -> Delhi
// 2 -> Pune
// 3 -> Patna
// 4 -> Kolkata
// 5 -> Chennai

// Key 3 Found : Patna
// Key 5 Exists

// Size : 5
// Is Empty : 0

// After Erasing Key 4
// 1 -> Delhi
// 2 -> Pune
// 3 -> Patna
// 5 -> Chennai

// After Erasing Key 1
// 2 -> Pune
// 3 -> Patna
// 5 -> Chennai

// First Element
// 2 -> Pune

// After Clear()
// Size : 0
// Empty : 1
