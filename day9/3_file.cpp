#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("2_file_handling.txt");
    fout<<"Hello Yume Chan ,namasthe\n";
    fout<<"howdiee";
    fout.close();
    ifstream fin("2_file_handling.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}
