#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    string gender;
    public:
      Person(string name,int age,string gender):name(name),age(age),gender(gender){
        cout<<"Person constructor"<<endl;
      }
};
class Teacher:public Person{
  public:
  int emp_id;
  string subject;
  string department;
  public:
  Teacher(string name,int age,string gender,int emp_id,string subject,string department):Person(name,age,gender),emp_id(emp_id),subject(subject),department(department){
    cout<<"Teacher constructor"<<endl;
  }
  void display1()
{
    cout<<"Teacher detailsL:"<<endl;
    cout<<"Teacher name:"<<endl;
    cin>>name;
    cout<<"Teacher age:"<<endl;
    cin>>age;
    cout<<"Teacher Gender:"<<endl;
    cin>>gender;
    cout<<"Employ id:"<<endl;
    cin>>emp_id;
    cout<<"Subject:"<<endl;
    cin>>subject;
    cout<<"department:"<<endl;
    cin>>department;
}
};
class Student:public Person{
    public:
    int roll_num;
    string class_grade;
    string section;
    public:
    Student(string name,int age,string gender,int roll_num,string class_grade,string section): Person(name,age,gender,roll_num,class_grade,section),roll_num(roll_num),class_grade(class_grade),section(section){
    cout<<"Student constructor"<<endl;
}

void display2(){
    cout<<"Student details:"<<endl;
    cout<<"Student name:"<<endl;
    cin>>name;
    cout<<"Student age:"<<endl;
    cin>>age;
    cout<<"Student Gender:"<<endl;
    cin>>gender;
    cout<<"Roll Number:"<<endl;
    cin>>roll_num;
    cout<<"Class Grade:"<<endl;
    cin>>class_grade;
    cout<<"Section:"<<endl;
    cin>>section;
}
};
int main(){
    Teacher t1("swapna");
    Student s1;
    t1.display1();
    s1.display2();
    return 0;
}