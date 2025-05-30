#include<iostream>
using namespace std;
int main(){
    int arr[3]={10,20,30};
    cout<<"print arr:"<<arr<<endl;
    cout<<"addess of 1:"<<&arr[0]<<endl;
    cout<<"value:"<<*(arr+1)<<endl;
    int*ptr=arr;
    cout<<"value using pointer:"<<*(ptr+2)<<endl;
    cout<<"before:"<<arr[1]<<endl;
    *(arr+1)=*(arr+1)*2;
    cout<<"after:"<<arr[1]<<endl;
    ptr=&arr[1];
    ptr++;
    ptr=arr;
    cout<<"value:"<<*ptr<<endl;
    cout<<"first elements:"<<arr[0]<<endl;
    cout<<"first elements:"<<*(arr+0)<<endl;
    cout<<"first elements:"<<*(ptr+0)<<endl;
    cout<<"first elements:"<<ptr[0]<<endl;
    cout<<"first elements:"<<0[ptr]<<endl;
    cout<<"first elements:"<<0[arr]<<endl;
    return 0;
}