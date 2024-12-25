#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
       // cout<<arr[i]<<" ";
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[5]={6,2,2,4,10};
cout<<"The unsorted array"<<endl;
 printarray(arr,5);
 cout<<endl;
cout<<"The sorted array is "<<endl;
selectionsort(arr,5);
printarray(arr,5);
   return 0;
}
// OUTPUT-
// The unsorted array
// 6 2 2 4 10
// The sorted array is
// 2 2 4 6 10
