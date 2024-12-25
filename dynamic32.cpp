#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter n:"<<endl;
    cin>>n;
    int m;
    cout<<"ENter m:"<<endl;
    cin>>m;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    //taking input
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}
// OUTPUT-
// ENter n:
// 2
// ENter m:
// 3
// 1 2 3 4 5 6
// 1 2 3
// 4 5 6