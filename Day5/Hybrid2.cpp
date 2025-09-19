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
        cout << "This is derived class of Base1 and Base2" << endl;
    }
};

class child1: public Derived{
public:
    void display4() {
        cout << "This is child1 of Derived" << endl;
    }
};

class child2 : public Derived{
public:
    void display5() {
        cout << "This is child2 of Derived" << endl;
    }
};

int main() {
    child1 obj;
    child2 obj1;


    obj.display1();
    obj.display2();
    obj1.display3();
    obj.display4();
    obj1.display5();


}



    