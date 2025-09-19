//for single datatype
#include<iostream>
using namespace std;
int main(){
    int a; 
    cout<<"Enter the value : ";
    cin>>a;
    int * ptr = new int ;
    * ptr = a;
    cout<<"the new value is : "<<*ptr<<endl ;
    delete ptr;
    cout<<"The Address of deleted value is : "<<*ptr;
}