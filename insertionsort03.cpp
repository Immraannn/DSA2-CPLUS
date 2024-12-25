#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{//ruk jao
                break;
            }
        }
        arr[j+1]=temp;
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
insertionsort(arr,8);
printarray(arr,8);
    return 0;
}
// OUTPUT-
// The sorted array is 
// 2 2 4 8 10 10 15 28