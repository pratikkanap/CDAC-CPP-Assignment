#include <iostream>
using namespace std;
class Parent1
{
public:
    void show() {}
    void show(int a, int b)
    {
        cout << "The addition is : " << a + b << endl;
    }
};
class Parent2
{
public:
    void show() {}
    void show(int a, int b)
    {
        cout << "the substraction is : " << b - a << endl;
    }
};
class Child : public Parent2, public Parent1
{
public:
    void show() 
    {
        cout << "The values Child " << endl;
    }
};
int main()
{
    Child c1;
    c1.show();
    // c1.Parent1::show(10, 30);
    // c1.Parent2::show(30, 40);
    return 0;
}