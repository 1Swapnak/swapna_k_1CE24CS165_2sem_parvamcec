#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int weight;
    public:
      Person(string name,int age,int weight):name(name),age(age),weight(weight){
        cout<<"Person constructor"<<endl;
      }
};
class Employee:public Person{
  public:
  int emp_id;
  public:
  Employee(string name,int age,int weight,int emp_id):Person(name,age,weight),emp_id(emp_id){
    cout<<"Employ constructor"<<endl;
  }
};
class manager:public Employee{
    public:
    int salary;
    public:
    manager(string name,int age,int weight,int emp_id,int salary): Employee(name,age,weight,emp_id),salary(salary){
    cout<<"manager constructor"<<endl;
}
void display()
{
    cout<<"Maneger detailsL:"<<endl;
    cout<<"Manager name:"<<name<<endl;
    cout<<"Manager age:"<<age<<endl;
    cout<<"Manager weight:"<<weight<<endl;
    cout<<"Employ id:"<<emp_id<<endl;
    cout<<"Manager salary:"<<salary<<endl;

}
};
int main(){
    manager m1("pavan",23,60,103,20000);
    m1.display();
}