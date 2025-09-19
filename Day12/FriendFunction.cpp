#include<iostream>
using namespace std;
class Demo{
    int length;

    friend int length(Demo);
    public: 
            Demo(){
                length = 10;
            }
            //friend retrun_type friend function_name(class_name obj);

};
int length(Demo b){
    b.length = b.length + 10;
    return b.length ;
}
int main(){
    Demo b;
    cout<<"The kength is : "<<length(b);
}
