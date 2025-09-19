#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    string line;
    fstream file("file.txt",ios::app);

    while(!file.eof()){
        getline(file,line);
        cout<<"It Reads the file";
    }
    cout<<line;
    file<<"P";
    file<<"R";
    file<<"A";
    file.close();
}