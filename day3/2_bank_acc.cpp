#include<iostream>
using namespace std;
class bankaccount{
    public:
    string holder_name;//data member
    int acc_no;//data member
    bankaccount(){      //constructor
        cout<<"constructor is called automatically"<<endl;
    }

};
int main(){
    bankaccount b1;
        return 0;
}
/*constructor
*it has no return type
*the name of the constructor is same as the class name
* after creating an object,constructor is called automatically
* it will used to initialize the value for the data member*/