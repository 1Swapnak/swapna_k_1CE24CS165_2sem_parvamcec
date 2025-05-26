#include<iostream>
using namespace std;
class Bank{
    string name;
    int acc_no;
public:
string getName(){
    return this->name;
}
int getAcc_no(){
    return this->acc_no;
}
void setName(string name){
   this->name=name;
}
void setAcc_no(int acc_no){
    this->acc_no=acc_no;
}
};
int main(){
    Bank s1;
    s1.setName("Bhavana");
    s1.setAcc_no(107);
    cout<<"The name of the Account Holder is:"<<s1.getName()<<endl;
    cout<<"The Account number of the Student is:"<<s1.getAcc_no()<<endl;
    return 0;
}