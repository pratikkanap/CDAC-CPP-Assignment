#include <iostream> 
using namespace std; 

//function declaraton
void add(int=1,int=2); 
void sub(int=4,int=9);
void mul(int=3,int=12);
void Div(int,int=6,int=3);
int main() 
{ 
    //function call
    add();
    add(5);
    sub();
    sub(8);
    mul(10,20);
    Div(2,5);
    Div(10);
    
}
//function defination
void add(int a,int b){
	cout<<"The Added value is :"<<a+b<<endl;
}
void sub(int c,int d){
	cout<<"The subtracted value is : "<<d-c<<endl;
}
void mul(int g,int h){
	cout<<"The Multiplication value is : "<<g*h<<endl;
}
void Div(int, int e,int f){
	cout<<"The divided value is : "<<e/f<<endl;
}
