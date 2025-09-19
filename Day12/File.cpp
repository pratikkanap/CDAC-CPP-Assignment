#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
    string line;
    ofstream my_file("Exam.txt",ios::app);

    if(!my_file){
        cout<<"The file does not existed!";
    }
     
    my_file << "Line 4" << endl;
    my_file << "Line 5" << endl;
    my_file << "Line 6" << endl;
    my_file.close();
}