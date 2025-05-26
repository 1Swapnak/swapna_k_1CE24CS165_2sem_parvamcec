#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    int weight;
    int height;
    string hair_color;
public:
    Person(string name,int age,int weight,int height,string hair_color): name(name),age(age),weight(weight),height(height),hair_color(hair_color)
        {
           cout<<"Person construction:"<<endl;
        }
};
class student:public Person{
    int roll_num;
    public:
    student(string name,int age,int weight,int height,string hair_color, int roll_num):Person(name,age,weight,height,hair_color),roll_num(roll_num){
        cout<<"student constructer"<<endl;
       
    }
    void display(){
        cout<<"student details"<<endl;
        cout<<"name of student:"<<name<<endl;
        cout<<"student age:"<<age<<endl;
        cout<<"student weight:"<<weight<<endl;
        cout<<"student height:"<<height<<endl;  
        cout<<"student hair color:"<<hair_color<<endl;
        cout<<"student roll_number:"<<roll_num<<endl; }
};
int main(){
    student s1("swapna",18,60,5.4,"brown",165);
    s1.display();
}
