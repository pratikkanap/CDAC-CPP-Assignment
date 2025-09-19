#include<iostream>
using namespace std;
class Demo{
    int length;

    public: 
            Demo(){
                length = 10;
            }
            friend int length(Demo);

};
int length(Demo b){
    b.length = b.length + 10;
    return b.length ;
}
int main(){
    Demo b;
    cout<<"The kength is : "<<length(b);
}
