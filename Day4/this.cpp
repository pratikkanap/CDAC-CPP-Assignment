#include<iostream>
using namespace std;

class Complex{

    int real, img;
    //cin>>real>>img;

    public :
        Complex(int real , int img){
            this->real=real;
            this->img=img;
        }
        void show(){
            cout<<"The real and img value is : "<<real<<"+"<<img<<"i"<<endl;
           // cout<<this;
        }
};
int main(){
    Complex c1(1,2);
    c1.show();
    cout<<"The Address is : "<<&c1;
}

