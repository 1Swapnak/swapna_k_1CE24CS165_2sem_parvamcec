#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int class_no,roll_no;
    float marks;
    public:
    student(string name,int class_no,int roll_no,float marks){
        cout<<"Student"<<endl;
        this->name=name;
        this->class_no=class_no;
        this->roll_no=roll_no;
        this->marks=marks;
     }
void display(){
    cout<<"The Student name:"<<this->name<<endl;
    cout<<"The Student Roll number:"<<roll_no<<endl;
    cout<<"the Class room number :"<<class_no<<endl;
    cout<<"the student marks :"<<marks<<endl;
}

};
int main(){
    student s1("swapna",106,34,56);
    s1.display();
    return 0;
}

