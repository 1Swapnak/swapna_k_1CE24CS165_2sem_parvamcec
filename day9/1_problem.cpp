#include<iostream>
using namespace std;
int main(){
    int i,a[5]={10,20,30,45,10};
    int*ptr=a;
    int max=*ptr;
    for(i=0;i<5;i++){
     if(*(ptr+i)>max){
        max=*(ptr+i);
     }
    }
    cout<<"The Greatest  number is:"<<max<<endl;
    return 0;
}