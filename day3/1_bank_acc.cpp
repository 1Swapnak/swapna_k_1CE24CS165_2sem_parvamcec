#include<iostream>
using namespace std;
class bankaccount{
    public:
    string holder_name;
    int acc_no;

};
int main(){
    bankaccount b1;
    b1.holder_name="swapna";
    b1.acc_no=102;
    cout<<"holder name name:"<<b1.holder_name<<endl;
    cout<<"Account number:"<<b1.acc_no<<endl;
    return 0;
}