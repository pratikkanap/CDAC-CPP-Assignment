#include<iostream>
using namespace std;
class Demo{
    int a, b;

    public :
           
            Demo(int a, int b){
                this -> a = a;
                this -> b = b;
            }
            void Display(){
                cout<<"The additon of 2 number is : "<<a+b;
            }
};
class Derived:public Demo{

};
int main(){
    Demo obj(1,2);
    obj.Display();
    
}