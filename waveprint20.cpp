#include<iostream>
using namespace std;
void waveprint(int arr[][4],int r,int c){
    for(int j=0;j<c;j++){
        if(j%2==1){//odd index->bottom to top
for(int i=r-1;i>=0;i--){
    cout<<arr[i][j]<<" ";
}
        }
        else{// even index->top to bottom
            for(int i=0;i<r;i++){
    cout<<arr[i][j]<<" ";
}
        }
    }
}

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
cout<<"The wave print is :"<<endl;
    waveprint(arr,3,4);

return 0;
}
// OUTPUT-
// 1 2 3 4
// 5 6 7 8
// 9 8 7 6
// The wave print is :
// 1 5 9 8 6 2 3 7 7 6 8 4