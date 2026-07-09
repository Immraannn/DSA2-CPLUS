#include<iostream>
#include<array>
using namespace std;
int main(){
     array<int,4> a={1,2,3,4}; // array<data_type, size> array_name; 
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at second index is "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;

    return 0;
}
// OUTPUT-
// 1 2 3 4
// Element at second index is 3
// Empty or not 0
// First element 1
// last element 4
//SWAP
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,3> a = {1,2,3};
    array<int,3> b = {10,20,30};

    a.swap(b);

    cout << "Array A : ";

    for(int x : a)
        cout << x << " ";

    cout << endl;

    cout << "Array B : ";

    for(int x : b)
        cout << x << " ";

    return 0;
}
//output
// Array A : 10 20 30
// Array B : 1 2 3

//ITERATOR
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> arr = {10,20,30,40,50};

    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
//output
10 20 30 40 50
