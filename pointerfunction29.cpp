#include<iostream>
using namespace std;
void print(int*p){
    cout<<*p<<endl;
}
void update(int*p){
    *p=*p+1;
}
int getsum(int *arr,int n){
    cout<<"size :"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}
int main(){
    int value=5;
    int*p=&value;
    cout<<"Before value is:"<<*p<<endl;
    cout<<"Before adress is: "<<p<<endl;
    update(p);
    cout<<"after value is:"<<*p<<endl;
    print(p);
    cout<<"after adress is: "<<p<<endl;
    int arr[5]={1,2,3,4,5};
   // cout<<"sum is "<<getsum(arr,5)<<endl;->sum is 15
    cout<<"sum is "<<getsum(arr+2,3)<<endl;
    return 0;
}
// OUTPUT-
// Before value is:5
// Before adress is: 0x61ff08
// after value is:6
// 6
// after adress is: 0x61ff08
// size :4
// sum is 12