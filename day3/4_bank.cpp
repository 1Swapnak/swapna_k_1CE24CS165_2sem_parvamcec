#include<iostream>
using namespace std;
class bankaccount{
    public:
    string holder_name;//data member
    int acc_no;//data member
    bankaccount(){
        cout<<"default constructor"<<endl;
        this->holder_name="unknown";
        this->acc_no=0;
    }
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
    bankaccount b1;
    bankaccount b2("swapna",103);
    b1.display();
    b2.display();
        return 0;
}