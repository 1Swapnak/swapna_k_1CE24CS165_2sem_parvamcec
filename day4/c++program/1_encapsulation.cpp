#include<iostream>
using namespace std;
class student{
    string name;
    int roll_no;
public:
string getName(){
    return this->name;
}
int getRoll_no(){
    return this->roll_no;
}
void setName(string name){
   this->name=name;
}
void setRoll_no(int roll_no){
    this->roll_no=roll_no;
}
};
int main(){
    student s1;
    s1.setName("Bhavana");
    s1.setRoll_no(107);
    cout<<"The name of the Student is:"<<s1.getName()<<endl;
    cout<<"The Roll number of the Student is:"<<s1.getRoll_no()<<endl;
    return 0;
}