#include<iostream>
using namespace std;
void selectionsort(int arr[], int n) {

    // Outer loop: moves boundary of unsorted part
    // After every iteration, one smallest element is placed at correct position
    for(int i = 0; i < n-1; i++){

        // Assume current index has minimum element
        int minindex = i;

        // Inner loop: find the minimum element in remaining unsorted array
        for(int j = i+1; j < n; j++){

            // If smaller element found, update minindex
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }

        // Swap smallest element with element at position i
        swap(arr[minindex], arr[i]);
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

