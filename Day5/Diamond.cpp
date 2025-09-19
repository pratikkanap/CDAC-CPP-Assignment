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

class Base1 : public Derived1, public Derived2{
public:
    void display4() {
        cout << "This is Base1" << endl;
    }
};

int main() {
    Derived1 obj;
    Base1 obj3;

    obj.display1();
    obj3.display2();
    obj3.display3();
    obj3.display4();
}
