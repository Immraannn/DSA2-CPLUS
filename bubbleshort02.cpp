#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[8]={15,2,8,4,10,28,2,10}; 
cout<<"The sorted array is "<<endl;
bubblesort(arr,8);
printarray(arr,8);
   return 0;
}
// OUTPUT-
// The sorted array is 
// 2 2 4 8 10 10 15 28