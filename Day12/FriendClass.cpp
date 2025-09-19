#include<iostream>
using namespace std;
class Demo{
    int length;
    public :
        Demo(){
        length = 10;
    }
    friend class Demo1;
};
class Demo1{
    public:
        void display(Demo& d) { 
        d.length  = d.length + 10;
        cout<<"Length :"<<d.length;
    }
};
int main(){
    Demo g;
    Demo1 i;
    i.display(g); 
}