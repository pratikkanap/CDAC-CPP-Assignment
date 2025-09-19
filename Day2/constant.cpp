#include<iostream>
using namespace std;

//class 
class Complex{

    //by default this variable are private 
    int real, img;
    
    //function declaration
    public: 
            Complex();
            Complex(int);
            void accept();
            void display() const ;
            int getReal() const ;
            void setReal(int);
};

//function defination
void Complex::accept(){
    cout <<"Enter the real and img number :  ";
    cin >>real>>img;
}
void Complex::display() const{
    cout << "the real and img number is : " <<real<<" + "<<img<<"i"<<endl;
}
void Complex::setReal(int r){
    real = r ;
}
int Complex::getReal() const{
    return real;
}
Complex:: Complex(){
    real=1;
    img=2;
}
Complex::Complex(int r){
    real=r;
    
}


int main(){
    //function call by object
    Complex c1;
    c1.accept();
    c1.display() ;
    c1.setReal(40);
    cout<<"the real value is :"<<c1.getReal()<<endl;
    c1.display();
    const Complex c3(8);
    cout<<"real part : "<<c3.getReal();
    
}
