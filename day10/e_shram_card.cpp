#include<iostream>
#include<iomanip>
using namespace std;
class Eshram{
    public:
    string name;
    string  dob;
    string ph_no;
    string add;
    string es_no;
    void enterdetails()
    {
        cout<<"Enter your name:"<<endl;
        getline(cin,name);//cin>>name;
        cout<<"Enter your Date of Birth:"<<endl;
        getline(cin,dob);
        cout<<"Enter your phone number:"<<endl;
        getline(cin,ph_no);
        cout<<"Enter your  address:"<<endl;
        getline(cin,add);
        cout<<"Enter your Eshram card:"<<endl;
        getline(cin,es_no);
    }
    void display(){
        cout<<"========================"<<endl;
        cout<<"----E Sharam Card-------"<<endl;
        cout<<"========================"<<endl;
        cout<<"ESHARAM CARD NUMBER:"<<es_no<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"DATE OF BIRTH:"<<dob<<endl;
        cout<<"PHONR NUMBER"<<ph_no<<endl;
        cout<<"ADDESS:"<<add<<endl;
        cout<<"========================"<<endl;
    }
};

int main(){

    Eshram person;
    int choice;
    do{
        cout<<"\n=====ESHARAM CARD MENU====="<<endl;    
        cout<<"1.Enetr personal details"<<endl;
        cout<<"2.diaplay Esharam card"<<endl;
        cout<<"3.exit"<<endl;
        cout<<"enter your choice (1-3):";
        cin>>choice;
        cin.ignore();
        switch(choice){
           case 1:
           person.enterdetails();//enterdetails(person)
           break;
           case 2:
          // person.enterdetails();
           person.display();
           break;
           case 3:
           cout<<"Thank you for using the E sharam card system.bye!";
           break;
           default:
           cout<<"you entered invalid choice.";
        }
    }while(choice!=3);
    return 0;
}
