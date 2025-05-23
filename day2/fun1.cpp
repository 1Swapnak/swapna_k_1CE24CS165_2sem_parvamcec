#include<iostream>
using namespace std;
int add(int num1,int num2);//function declaration(return_type fun_name(parameters);)
int main(){
    int a=90;
    int b=10;
    int res=add(a,b);//function call(res=fun_name(arguments))
    cout<<"the result is ="<<res<<endl;
    int c=20;
    int d=50;
    int res1=add(c,d);
    cout<<"result2 is ="<<res1<<endl;
}
int add(int num1,int num2)//function definition
{
    int sum=num1+num2;
    return sum;
}