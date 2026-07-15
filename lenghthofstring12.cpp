class Solution {
public:
    int lengthOfString(string s) {
        // or use  return s.length
        int length = 0;
        // Count each character
        while (s[length] != '\0') {
            length++;
        }
        return length;
    }
};



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



// | Data Type                       | Preferred Parameter         |
// | ------------------------------- | --------------------------- |
// | `int`, `char`, `bool`, `double` | Pass by value (`int x`)     |
// | `string` (read only)            | `const string& s` ⭐         |
// | `string` (modify)               | `string& s`                 |
// | `vector` (read only)            | `const vector<int>& nums` ⭐ |
// | `vector` (modify)               | `vector<int>& nums`         |
