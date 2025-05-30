#include<iostream>
using namespace std;
class Student{
    string name;
    int roll_no;
    public:
    void input(){//Student(string name,int roll_no):name(name),roll_no(roll_no){}(constructor)
        cout<<"Enetr the name of the student:"<<endl;
        cin>>name;
        cout<<"Enter the Student roll number:"<<endl;
        cin>>roll_no;
    }
    void display(){
        cout<<"The Name of Student is:"<<name<<endl;
        cout<<"The Roll Number of the Student:"<<roll_no<<endl;
    }
};
int main(){
    //int a[10]
    Student Childrens[3];
    for(int i=0;i<3;i++){
    Childrens[i].input();
    Childrens[i].display();
    }
    return 0;
}