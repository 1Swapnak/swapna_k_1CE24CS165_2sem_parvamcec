#include<iostream>
using namespace std;
class Message{
    public:
    void sendmessage(string e_mail,string message){
        cout<<"Messege sent successfully"<<endl;
        cout<<"email:"<<e_mail<<endl;
        cout<<"Messege:"<<message<<endl;
    }
    void sendmessage(double ph_no,int otp){
        cout<<"OTP sent successfully"<<endl;
        cout<<"Phone Number:"<<ph_no<<endl;
        cout<<"OTP:"<<otp<<endl;
    }
};
int main(){
    Message m1;
    m1.sendmessage("kjh546@gamial.com","hi SWapma");
    m1.sendmessage(123456,43453);
    return 0;
}