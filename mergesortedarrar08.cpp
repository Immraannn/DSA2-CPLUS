#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    // i -> pointer for arr1
    // j -> pointer for arr2
    // k -> pointer for arr3 (merged array)
    int i = 0, j = 0, k = 0;

    // Run until any one array becomes empty
    while(i < n && j < m) {

        // Compare current elements of both arrays
        if(arr1[i] < arr2[j]) {

            // Put smaller element from arr1 into arr3
            arr3[k] = arr1[i];

            // Move arr1 pointer forward
            i++;

            // Move merged array pointer forward
            k++;
        }
        else {

            // Put smaller element from arr2 into arr3
            arr3[k] = arr2[j];

            // Move arr2 pointer forward
            j++;

            // Move merged array pointer forward
            k++;
        }
    }

    // If any elements are left in arr1, copy them
    while(i < n) {                 // until arr1 finishes
        arr3[k] = arr1[i];        // copy element
        i++;                      // move arr1 pointer
        k++;                      // move arr3 pointer
    }

    // If any elements are left in arr2, copy them
    while(j < m) {                 // until arr2 finishes
        arr3[k] = arr2[j];        // copy element
        j++;                      // move arr2 pointer
        k++;                      // move arr3 pointer
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
