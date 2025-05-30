#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("3_file_handling.txt");
    fout.put('S');
    fout.close();
    ifstream fin("3_file_handling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout<<"The Value is:"<<v1;
}