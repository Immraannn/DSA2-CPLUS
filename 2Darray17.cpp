#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target ,int r,int c ){
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }

        }
    }
    return 0;
}
int main(){
    //this below line will get printed row wise
   // int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
    int arr[3][4];
    //taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //print of array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to search :"<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"Element found: "<<endl;
    }
    else{
        cout<<"Not found:"<<endl;
    }
    return 0;
}
// OUTPUT-
// 1 2 3 4 5 6 7 8 9 9 8 7
// 1 2 3 4
// 5 6 7 8
// 9 9 8 7
// Enter the element to search :
// 2
// Element found:
