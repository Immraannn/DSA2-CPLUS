#include<iostream>
using namespace std;
int getsum(int*arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    //variable size array 
    int *arr=new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int ans=getsum(arr,n);
    cout<<"Sum is :"<<ans<<endl;
    //delete[]arr;  to release memory
    return 0;
}
// OUTPUT-
// 5
// 2 3 4 5 6
// Sum is :20
