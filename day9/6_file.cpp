#include<iostream>
#include<fstream>
#include<sstream>
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
    double a=10;
    cout<<"The size of the a:"<<sizeof(a)<<endl;
    ;
    Student s1;
    ofstream fout("Student.dat",ios::binary);
    s1.input();
    fout.write((char*)&s1,sizeof(s1));
    fout.close();
    Student s2;
    ifstream fin("Student.dat",ios::binary);
    fin.read((char*)&s2,sizeof(s2));
    s2.display();
    return 0;
}