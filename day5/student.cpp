#include<iostream>
using namespace std;
class Student{
      string name;
      int roll_num;
      public:
       Student(string name,int roll):name(name),roll_num(roll)
       {
        cout<<"construction is called:"<<endl;
       }
       void display(){
        cout<<"name:"<<name<<endl;
        cout<<"roll_num"<<roll_num<<endl;
       }
};
int main()
{
    Student s1("bhavana",23);
    s1.display();
}