#include<iostream>
using namespace std;
class student{
    private:
    string name;
    public:
    student(string name){//consturctor
        this->name=name;
        cout<<"constructor called for:"<<this->name<<endl;
    }
    ~student(){//destructor
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main(){
    student s1("pavan");
    student s2("rohan");
    student s3("murthi");
     return 0;
}

