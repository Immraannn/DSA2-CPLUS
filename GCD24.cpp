#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if (b==0) return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter the vslkues of a and b "<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"The gcd of "<<a<<" and "<<b<<" is "<<ans<<endl;
    return 0;
}
// OUTPUT-
// Enter the vslkues of a and b 
// 24
// 48
// The gcd of 24 and 48 is 24