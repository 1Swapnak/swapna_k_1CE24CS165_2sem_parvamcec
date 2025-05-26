#include<iostream>
using namespace std;                           
int main(){
    int op;
    double first,second,sum,sub,div,mul,mod;
    cout<<"enter the choice 1(+),2(-),3(*),4(/)"<<endl;
    cin>>op;
    cout<<"enter the 2 operands"<<endl;
    cin>>first>>second;
    switch(op){ 
        case 1:
         sum=first+second;
         cout<<"the sum of two numbers:"<<sum<<endl;
         break;
        case 2:
         sub=first-second;
         cout<<"the sub of two numbers:"<<sub<<endl;
         break;
        case 3:
         mul=first*second;
         cout<<"the mul of two numbers:"<<mul<<endl;
         break;
        case 4:
         div=first/second;
         cout<<"the div of two numbers:"<<div<<endl;
         break;
        default:
         cout<<"you entered the invalid charector"<<endl;
    }
}