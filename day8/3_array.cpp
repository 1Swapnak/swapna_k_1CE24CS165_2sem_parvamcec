#include<iostream>
using namespace std;
int main(){
    double a[9];
    int i;
    cout<<"Enter the value of array:"<<endl;
    for(i=0;i<9;i++){
        cout<<"Enter the"<<i+1<<"Element:"<<endl;
        cin>>a[i];
    }
    cout<<"array elemts are:"<<endl;
    for(i=0;i<9;i++){
        cout<<i+1<<"Elements is:"<<a[i]<<endl;
    }
    return 0;
}