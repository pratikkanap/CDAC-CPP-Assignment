#include<iostream>
using namespace std;
int main(){
    int fact = 1 ,i;
    int num ;
    cout<<"Enter the Number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    cout<<"The factorial of "<<num<< " is : "<<fact<<endl;
}

   
