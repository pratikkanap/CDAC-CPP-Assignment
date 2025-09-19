#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream my_file("example.txt");
    if(!my_file.is_open()){
        cout<<"The file does not exist !";
    }
    else{
        cout<<"File is Existed and open also";
    }
    my_file.close();

}