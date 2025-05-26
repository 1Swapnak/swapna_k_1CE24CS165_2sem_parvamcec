#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    int age;
    int weight;
    string height;
    string hair_color;
public:
    Person()
        {
           cout<<"Person construction:"<<endl;
        }
};
class student:public Person{
    int roll_num;
    public:
    student(string name,int age,int weight,int roll_num,string height,string hair_color){
        cout<<"student constructer"<<endl;
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
        this->height=height;
        this->hair_color=hair_color;
    }
    void display(){
        cout<<"student details"<<endl;
        cout<<"name of student:"<<name<<endl;
        cout<<"student age:"<<age<<endl;
        cout<<"student weight:"<<weight<<endl;
        cout<<"student roll_number:"<<roll_num<<endl; 
        cout<<"student height:"<<height<<endl;  
        cout<<"student hair color:"<<hair_color<<endl; }
};
int main(){
    student s1("swapna",18,60,165,"5.4ft","brown");
    s1.display();
}
