#include<iostream>
using namespace std;
int main(){
char name[20];
cout<<"Enter your name "<<endl;
cin>>name;
int i=0,length=0;
while(name[i]!='\0'){
    length++;
    i++;
}
cout<<length;
    return 0;
}