#include<iostream>
using namespace std;

void add(int x ,int y){
    cout<<"the addition is : ";
    cout<<x+y<<endl;
    
}

void sub(int a ,int b){

    //more preferance than main because of local variable 
    b = 30;
    cout<<"the subtraction is : ";
    cout<<b-a<<endl;
    
}
int main(){
    add(5,8);
    sub(10,20);
    
}
