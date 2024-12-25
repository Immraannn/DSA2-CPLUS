#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
   int i=0,j=0,k=0;
   while(i<n&&j<m){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
   }
   while(i<n){//copy 1st array remaining element
arr3[k]=arr1[i];
k++;
i++;
   }
   while(j<m){//copy 2nd array remaining element
arr3[k]=arr2[j];
k++;
j++;
   }
}
void print(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8];
    merge(arr1,5,arr2,3,arr3);
    cout<<"The merge two sorted array is "<<endl;
    print(arr3,8);
    return 0;
}
// OUTPUT-
// The merge two sorted array is 
// 1 2 3 4 5 6 7 9