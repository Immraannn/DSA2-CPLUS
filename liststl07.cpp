#include<iostream>
#include<list>        // Header file for STL list
using namespace std;

int main(){

    // Create an empty doubly linked list
    list<int> l;

    // Create a list of size 5 with all elements initialized to 100
    list<int> n(5,100);

    // Print the elements of list 'n'
    cout << "Printing n" << endl;
    for(int i : n){
        cout << i << " ";
    }
    cout << endl;

    // Insert 1 at the end of the list
    l.push_back(1);

    // Insert 2 at the beginning of the list
    l.push_front(2);

    // Print the list
    cout << "Elements of list l:" << endl;
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    // Print current size of the list
    cout << "Size of list before erase: " << l.size() << endl;

    // Remove the first element
    // begin() returns an iterator pointing to the first element
    l.erase(l.begin());

    // Print the list after erasing the first element
    cout << "After erase:" << endl;
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    // Print size after erase
    cout << "Size of list after erase: " << l.size() << endl;

    return 0;
}
// OUTPUT-
// Printing n 
// 100 100 100 100 100
// 2 1
// size of list before erase 2
// after erase erase
// 1
// size of list after erase 1
