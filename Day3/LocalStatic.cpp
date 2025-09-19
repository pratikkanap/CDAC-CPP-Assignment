#include<iostream>
using namespace std;

void show();
void display();
int main(){
    cout<<"the static variables are : "<<endl;
    show();
    show();
    show();
     cout<<"the local variables are : "<<endl;
     display();
     //this shows error for the local variable 
        //cout<<"the value of y is  : "<<y;
     display();
}    
//static 
    
void show(){
    static int x;
    cout<<x<<endl;
     x++;
}
    
//local
void display(){
     int y =20;
     cout<<y<<endl;
}

