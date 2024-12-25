#include<iostream>
using namespace std;
void spiralprint(int arr[][3],int r,int c){
    int count=0;
    int total=r*c;
    int startingrow=0;
    int startingcol=0;
    int endingrow=r-1;
    int endingcol=c-1;
    while(count<total){
        //printing starting row
        for(int index=startingcol;count<total &&index<=endingcol;index++){
            cout<<arr[startingrow][index]<<" ";
            count++;
        }
        startingrow++;
        //printing ending column
        for(int index=startingrow; count<total &&index<=endingrow;index++){
            cout<<arr[index][endingcol]<<" ";
            count++;
        }
        endingcol--;
        //printing ending row
        for(int index=endingcol; count<total &&index>=startingcol;index--){
            cout<<arr[endingrow][index]<<" ";
            count++;
        }
        endingrow--;
        //printing starting column
        for(int index=endingrow; count<total &&index>=startingrow;index--){
            cout<<arr[index][startingcol]<<" ";
            count++;
        }
        startingcol++;
    }
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
cout<<"The wave print is :"<<endl;
    spiralprint(arr,3,3);

return 0;
}
// OUTPUT-
// 1 2 3
// 4 5 6
// 7 8 9
// The wave print is :
// 1 2 3 6 9 8 7 4 5