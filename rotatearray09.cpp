#include<iostream>
using namespace std;
void rotatearray(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
    temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int temp[n];
    rotatearray(arr,n,2);
     printarray(arr,n);
    return 0;
}
// OUTPUT-
// 4 5 1 2 3 