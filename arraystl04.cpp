#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
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