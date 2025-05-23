#include<iostream>
using namespace std;
class bankaccount{
    public:
    string holder_name;//data member
    int acc_no;//data member
    bankaccount(string name,int acc_no){      //constructor
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->acc_no=acc_no;  
}
void display(){
    cout<<"Holder Name :"<<this->holder_name<<endl;
    cout<<"Account number:"<<this->acc_no<<endl;
}
};
int main(){
    bankaccount b1("Bhavana",103);
    b1.display();
        return 0;
}
/* all argument constructor or full value constsuctor*/