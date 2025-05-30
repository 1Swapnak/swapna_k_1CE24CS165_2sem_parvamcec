#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void makeSound(){
        cout<<"animal making sound"<<endl;
    }
};
class Dog:public Animal{
    public:
    void makeSound(){
        cout<<"dog making sound"<<endl;
    }
};
int main(){
    Animal*a1;
    Dog d1;
    a1=&d1;
    a1->makeSound();
}