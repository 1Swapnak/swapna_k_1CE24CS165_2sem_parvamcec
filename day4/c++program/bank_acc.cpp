#include<iostream>
using namespace std;
class Bank{
    public:
    int acc_no;
    Bank(int num){//consturctor
        this->acc_no=num;
        cout<<"constructor called for:"<<this->acc_no<<endl;
    }
    ~Bank(){//destructor
        cout<<"destructor called for:"<<this->acc_no<<endl;
    }
};
int main(){
    Bank s1(998765);
    Bank s2(987656); 
    Bank s3(988769);
     return 0;
}
