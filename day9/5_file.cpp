#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"Enter a and b value:"<<endl;
    cin>>a>>b;
    sum=a+b;
    ofstream fout("4_file_handling.txt");
    fout<<"The sum of "<<a<<" and "<<b<<"is:"<<sum;
    fout.close();

    ifstream fin("4_file_handling.txt");//to read the entire file = use while loop
    string s1;                            //while(getline(fin,s1)){statement}
    getline(fin,s1);
    fin.close();

}