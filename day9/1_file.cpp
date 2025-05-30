#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream fout;//ofstream is writung file,fout is object for writing file
    fout.open("1_file_handling.txt");//it will open the file in write mode.if file is not present in the "cwd"it will create a new file with specified name
    fout<<"Hello Yume Chan";
    fout.close();

}