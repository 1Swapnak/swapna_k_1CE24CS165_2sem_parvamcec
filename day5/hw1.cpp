#include<iostream>
using namespace std;
class creditcard{
    public:
    void make_payment(double amount){
        cout<<"paid"<<amount<<"using creditcard"<<endl;
    }
};
class paypal{
    public:
    void make_payment(double amount){
     cout<<"paid"<<amount<<"paypal"<<endl;
}
};
class upi{
    public:
    void make_payment(double amount){
        cout<<"paid"<<amount<<"using upi"<<endl;
    }
};
int main(){
    creditcard  c1;
    paypal p1;
    upi u1;
    c1.make_payment(1000);
    p1.make_payment(500);
    u1.make_payment(50);
    return 0;
}