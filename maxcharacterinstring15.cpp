#include<iostream>
using namespace std;
char getmaxchar(string s){
    int arr[26];
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lower case
        int number=0;
        if(ch>='a'&& ch<='z'){
            number=ch-'a';
        }
        else{//upper case
        number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
for(int i=0;i<26;i++){
if(maxi<arr[i]){
    ans=i;
    maxi=arr[i];
}
} 
char finalAns='a'+ans;   
return finalAns;
}
int main(){
    return 0;
}