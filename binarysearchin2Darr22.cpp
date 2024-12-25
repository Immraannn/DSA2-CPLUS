#include<iostream>
using namespace std;
bool searchmatrix(int arr[3][4],int target,int r,int c){
int s=0;
int e=r*c-1;
int mid=s+(e-s)/2;
while(s<=e){
    int element=arr[mid/c][mid%c];
    if(element==target){
        return 1;
    }
   else if(element<target){
        s=mid-1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    return 0;
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
cout<<searchmatrix(arr,13,3,4);
    
return 0;
}
// OUTPUT-
// 11 12 13 14
// 15 16 17 18
// 19 20 21 22
// 1