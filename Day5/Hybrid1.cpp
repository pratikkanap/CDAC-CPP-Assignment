//here we have one parent/base class and we have two child of that class

#include <iostream>
using namespace std;

class Base {
public:
    void display1() {
        cout << "Base" << endl;
    }
};

class Derived1 : public Base{
public:
    void display2() {
        cout << "This is Derived1 of Base" << endl;
    }
};

class Derived2 : public Base{
public:
    void display3() {
        cout << "This is Derived2 of Base" << endl;
    }
};

int main() {
    Derived1 obj;
    Derived2 obj1;


    obj.display1();
    obj.display2();
    obj1.display3();
}
