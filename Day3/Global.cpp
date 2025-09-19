#include<iostream>
using namespace std;
//This is the global variable 
int a = 10;

//function declaration
void show();

int main(){
    cout<<"This is global value in main function : "<<a<<endl;
    a++;
    show();
    cout<<"This is increase value in main function : "<<a<<endl;
}
void show(){
        cout<<"The gobal acan be access any where : "<<a<<endl;
        a = 0;
        cout<<a<<endl;
        a++;
        cout<<a<<endl;
}