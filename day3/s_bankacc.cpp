#include<iostream>
using namespace std;
class bankaccount{
    public:
    string holder_name;//data member
    int acc_no;//data member
    /*bankaccount(){
        cout<<"default constructor"<<endl;
        this->holder_name="unknown";
        this->acc_no=0;
    */
    bankaccount(string name,int acc_no){      //constructor
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->acc_no=acc_no;  
}
bankaccount(bankaccount &b1){
    this->holder_name=b1.holder_name;
    this->acc_no=b1.acc_no;
}
void display(){
    cout<<"Holder Name :"<<this->holder_name<<endl;
    cout<<"Account number:"<<this->acc_no<<endl;
}
};
int main(){
    bankaccount b1("mohan",102);
    b1.display();
    bankaccount b2=b1;
    b2.display();
    return 0;
}