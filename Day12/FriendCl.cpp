#include<iostream>
using namespace std;
class Demo{
        int a;
        public: 
                Demo(){
                         a = 20;
        }
        friend class A;
}; 
class A{
    public : 
    void dislpay(Demo &m){
        m.a = m.a + 10;
        cout<<m.a;
    }
};  
int main(){
    Demo obj;
    A obj1;
    obj1.dislpay(obj);
}