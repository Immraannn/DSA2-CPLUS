#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
    cout<<i<<" ";
}
    //d.pop_front();--> it will dlete element at front position
    cout<<endl;
    cout<<"Print first element "<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Before erase size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size "<<d.size()<<endl;
for(int i:d){
    cout<<i<<" ";
}
    return 0;
}
// OUTPUT-
// 2 1 
// Print first element 1
// Front 2
// back 1
// Empty or not 0
// Before erase size 2
// after erase size 1
// 1