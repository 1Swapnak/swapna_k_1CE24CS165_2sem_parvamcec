#include<iostream>
using namespace std;
class bus{
    public:
    string direction;
    int no_passenger;
};
int main(){
    bus b1;
    b1.direction="banglore";
    b1.no_passenger=40;
    cout<<"THE ROOT OF THE BUS:"<<b1.direction<<endl;
    cout<<"THE NUMBER OF PASSENGERS:"<<b1.no_passenger<<endl;
    return 0;
}
