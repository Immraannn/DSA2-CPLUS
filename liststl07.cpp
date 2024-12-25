#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    list<int>n(5,100);
    cout<<"Printing n "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list before erase "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list after erase "<<l.size()<<endl;
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