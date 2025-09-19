#include <iostream>
using namespace std;
 class Base{   
    protected:
               int num;
    };

//it is the inheritance of the class with protected values 
class Derived : public Base{
    public:
    void setNum(int n){ 
       num = n;
    }
    void display(){
        cout << "Number is: " << num << endl;
    }
};
 int main() {

    Derived obj1;
    obj1.setNum(60);
    obj1.display();

}