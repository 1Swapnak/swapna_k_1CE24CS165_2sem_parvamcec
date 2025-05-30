#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
ofstream fout;
    fout.open("1_file_handling.txt",ios::app);
    fout<<" Hello Japanese";
    fout.close();
}