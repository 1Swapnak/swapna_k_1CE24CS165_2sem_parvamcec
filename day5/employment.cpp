#include<iostream>
using namespace std;
class Employment{
      string name;
      double phone_num=0;
      public:
       Employment(string name,double phone):name(name),phone_num(phone)
       {
        cout<<"details is called:"<<endl;
       }
       void display(){
        cout<<"name:"<<name<<endl;
        cout<<"phone_num:"<<phone_num<<endl;
       }
};
int main()
{
    Employment s1("swapna",1234567);
    s1.display();
}