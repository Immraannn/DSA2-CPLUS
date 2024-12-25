#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
vector<int>a(5,1);
vector<int>last(a);
cout<<"print last"<<endl;
for(int i:last){
    cout<<i<<" ";
}
cout<<endl;
cout<<"Capacity--> "<<v.capacity()<<endl;
v.push_back(1);
cout<<"Capacity--> "<<v.capacity()<<endl;
v.push_back(2);
cout<<"Capacity--> "<<v.capacity()<<endl;
v.push_back(3);
cout<<"Capacity--> "<<v.capacity()<<endl;
cout<<"Size "<<v.size()<<endl;
cout<<"Element at second index "<<v.at(2)<<endl;
cout<<"First element "<<v.front()<<endl;
cout<<"last element "<<v.back()<<endl;
cout<<"Before pop "<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
v.pop_back();
cout<<"after pop "<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl<<"Before clear size "<<v.size()<<endl;
v.clear();
cout<<"Before clear size "<<v.size()<<endl;



    return 0;
}
// OUTPUT-
// print last
// 1 1 1 1 1
// Capacity--> 0
// Capacity--> 1
// Capacity--> 2
// Capacity--> 4
// Size 3
// Element at second index 3
// First element 1
// last element 3
// Before pop
// 1 2 3
// after pop
// 1 2
// Before clear size 2
// Before clear size 0