#include<iostream>
using namespace std;
#include<stdlib.h>

class A{
    int a;
    public:
            A(){
                cout<<"Constructor is called !"<<endl;
            }
            ~A(){
                cout<<"Destructor was called !"<<endl;
            }
};
int main(){
    A* a = new A;
    cout<<"Object of class A was";
    cout<<"created using new operator!";
    cout<<endl;
    

}