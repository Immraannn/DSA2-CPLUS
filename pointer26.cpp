#include<iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    cout<<"a before "<<a<<endl;
    a++;
    cout<<"a after "<<a<<endl;
    int*p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
    //COPY a POINTER
    int*q=p;
    cout<<p<<endl;
    cout<<q<<endl;
    //POINTER ARITHEMETIC
    int  i=3;
    int*t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t:"<<t<<endl;
    return 0;
}
// OUTPUT-
// a before 5
// a after 6
// before 5
// after 6
// 0x61fefc
// 0x61fefc
// 4
// before t 0x61fef8
// after t:0x61fefc