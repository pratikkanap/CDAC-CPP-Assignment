//here we have two parent/base class and we have single child of that class

#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Base1" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display3() {
        cout << "This is Child class of Base1 and Base2" << endl;
    }
};

int main() {
    Derived obj;

    obj.display1();
    obj.display2();
    obj.display3();
}
