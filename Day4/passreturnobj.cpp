#include<iostream>
using namespace std;

class temp{
    int aobj1, aobj2;
    int aobj3, aobj4;
    int a;
    public :
            void get();
            temp add(temp &b1){
                temp aobj3;
                aobj3.a = this->a + b1.a;
                return aobj3;
            }

            void show(){
                cout<<"The value of a is :"<<a;
            }

        };
        void temp:: get(){
            cout<<"Enter the value : ";
            cin>>this->a;
        }
int main(){
    temp aobj1, aobj2;
    aobj1.get();
    aobj2.get();
    temp aobj4=aobj1.add(aobj2);
    aobj4.show();
}