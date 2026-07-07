#include<iostream>
using namespace std;
int main(){
char name[20];
cout<<"Enter your name "<<endl;
cin>>name;//space ,tab all are treated as null('\0') 
cout<<"Your name is "<<endl;
cout<<name;  
//Print the character array
    // cout prints characters until it reaches '\0'
    return 0;
}
// OUTPUT-
// Enter your name 
// Imran Shakeel
// Your name is 
// Imran
