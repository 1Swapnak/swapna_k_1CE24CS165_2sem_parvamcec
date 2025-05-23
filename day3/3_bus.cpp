#include<iostream>
using namespace std;
class bus{
    public:
    string direction;//data member
    int no_passenger;//data member
    bus(string root,int no){      //constructor
        cout<<"constructor is called automatically"<<endl;
        this->direction=root;
        this->no_passenger=no;  
}
void display(){
    cout<<"THE DIRECTION OF THE BUS:"<<this->direction<<endl;
    cout<<"THE NUMBER OF PASSENGERs:"<<this->no_passenger<<endl;
}
};
int main(){
    bus b1("Banglore",40);
    b1.display();
        return 0;
}/*types of construtor
1.default contructor
2.parameterized constructor
3.copy constructor
this->keyword,that is refers to the current class instants(object)*/