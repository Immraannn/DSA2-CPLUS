#include<iostream>
using namespace std;
bool checkpalindrome(char a[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(a[s]!=a[e]){
        return 0;
    }else{
        s++;
        e--;
    }
    return 1;
}
}

int length(char name[]){
    int i=0,length=0;
    while(name[i]!='\0'){
    length++;
    i++;
}
return length;
}
void reverse(char name[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main(){
    char name[20];
cout<<"Enter your name "<<endl;
cin>>name;
cout<<"your name is "<<name<<endl;
int len=length(name);
cout<<"Length is "<<len<<endl;
reverse(name,len);
cout<<"Reversed name is "<<name<<endl;
cout<<"palindrome or not :"<<checkpalindrome(name,len);
    return 0;
}
// OUTPUT-
// Enter your name 
// noon
// your name is noon
// Length is 4
// Reversed name is noon
// palindrome or not :1