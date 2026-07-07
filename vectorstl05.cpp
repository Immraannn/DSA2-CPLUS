#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Create an empty vector
    vector<int> v;

    // Create a vector of size 5 and initialize all elements to 1
    vector<int> a(5,1);

    // Create a copy of vector 'a'
    vector<int> last(a);

    // Print the copied vector
    cout << "Print last" << endl;
    for(int i : last){
        cout << i << " ";
    }
    cout << endl;

    // Capacity of an empty vector
    cout << "Capacity --> " << v.capacity() << endl;

    // Add first element
    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;

    // Add second element
    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;

    // Add third element
    // Capacity usually doubles when full
    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;

    // Current number of elements
    cout << "Size --> " << v.size() << endl;

    // Access element at index 2
    cout << "Element at second index --> " << v.at(2) << endl;

    // Access first element
    cout << "First element --> " << v.front() << endl;

    // Access last element
    cout << "Last element --> " << v.back() << endl;

    // Print vector before removing last element
    cout << "Before pop" << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    // Remove the last element
    v.pop_back();

    // Print vector after pop_back()
    cout << "After pop" << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    // Size before clear()
    cout << "Before clear size --> " << v.size() << endl;

    // Remove all elements from the vector
    // Capacity remains unchanged
    v.clear();

    // Size after clear()
    cout << "After clear size --> " << v.size() << endl;

    return 0;
}
